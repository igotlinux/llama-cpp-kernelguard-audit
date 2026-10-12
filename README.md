# llama.cpp (ggml) KernelGuard Compiler Audit

Real-world compiler verification and precision audit for production [llama.cpp](https://github.com/ggerganov/llama.cpp) (ggml) C++ kernels using **[KernelGuard](https://github.com/igotlinux/kernal-guard)**.

---

## 🔬 Audited Production Kernels
- **`ggml_vec_dot_f32`**: Transformer attention QK/V matrix vector dot product (`src/ggml_vec_dot_f32.cpp`)
- **`ggml_vec_silu_f32`**: SwiGLU activation function used in LLaMA 2 & LLaMA 3 (`src/ggml_vec_silu_f32.cpp`)
- **`ggml_vec_norm_f32`**: RMSNorm / LayerNorm transformer pre-normalization (`src/ggml_vec_norm_f32.cpp`)

---

## 📊 Verification Results (36 Configurations)
- **Compilers:** GNU GCC & LLVM Clang
- **Optimization Levels:** `-O0`, `-O2`, `-O3`
- **Floating-Point Modes:** IEEE-754 `strict` vs `fast-math` (FMA / vector contraction)
- **Verdict:** **36 PASSED, 0 FAILED** (100% Contract Compliance)

See the full generated PR summary in [`reports/summary.md`](reports/summary.md) or open the interactive HTML dashboard in [`reports/report.html`](reports/report.html).

---

## 🚀 How to Run
```bash
# Install KernelGuard
pip install kernelguard

# Run verification matrix
kg run --profile quick
```
