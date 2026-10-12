// Extracted from llama.cpp / ggml-cpu / vec.cpp
#include <cstddef>
#include <cmath>

#if defined(__ARM_NEON) || defined(__ARM_NEON__)
#include <arm_neon.h>
#elif defined(__AVX2__) || defined(__AVX__)
#include <immintrin.h>
#endif

extern "C" float ggml_vec_dot_f32(const float* __restrict__ x, const float* __restrict__ y, int n) {
#if defined(__ARM_NEON) || defined(__ARM_NEON__)
    float32x4_t sumv = vdupq_n_f32(0.0f);
    int i = 0;
    for (; i + 4 <= n; i += 4) {
        sumv = vmlaq_f32(sumv, vld1q_f32(x + i), vld1q_f32(y + i));
    }
    float sum = vaddvq_f32(sumv);
    for (; i < n; ++i) {
        sum += x[i] * y[i];
    }
    return sum;
#elif defined(__AVX2__) || defined(__AVX__)
    __m256 sumv = _mm256_setzero_ps();
    int i = 0;
    for (; i + 8 <= n; i += 8) {
#if defined(__FMA__)
        sumv = _mm256_fmadd_ps(_mm256_loadu_ps(x + i), _mm256_loadu_ps(y + i), sumv);
#else
        sumv = _mm256_add_ps(_mm256_mul_ps(_mm256_loadu_ps(x + i), _mm256_loadu_ps(y + i)), sumv);
#endif
    }
    float temp[8];
    _mm256_storeu_ps(temp, sumv);
    float sum = 0.0f;
    for (int k = 0; k < 8; ++k) sum += temp[k];
    for (; i < n; ++i) {
        sum += x[i] * y[i];
    }
    return sum;
#else
    float sum = 0.0f;
    for (int i = 0; i < n; ++i) {
        sum += x[i] * y[i];
    }
    return sum;
#endif
}
