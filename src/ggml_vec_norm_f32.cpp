// Extracted from llama.cpp / ggml-cpu / vec.h & ops.cpp
#include <cmath>

extern "C" void ggml_vec_norm_f32(const float* __restrict__ x, float* __restrict__ out, int n) {
    float sum = 0.0f;
    const float eps = 1e-5f;

    #pragma clang loop vectorize(enable)
    #pragma GCC ivdep
    for (int i = 0; i < n; ++i) {
        sum += x[i] * x[i];
    }

    float scale = 1.0f / std::sqrt(sum / static_cast<float>(n) + eps);

    #pragma clang loop vectorize(enable)
    #pragma GCC ivdep
    for (int i = 0; i < n; ++i) {
        out[i] = x[i] * scale;
    }
}
