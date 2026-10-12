// Extracted from llama.cpp / ggml-cpu / vec.cpp
#include <cmath>

inline float ggml_silu_scalar(float x) {
    return x / (1.0f + std::exp(-x));
}

extern "C" void ggml_vec_silu_f32(const float* __restrict__ x, float* __restrict__ y, int n) {
    #pragma clang loop vectorize(enable)
    #pragma GCC ivdep
    for (int i = 0; i < n; ++i) {
        y[i] = ggml_silu_scalar(x[i]);
    }
}
