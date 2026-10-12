## ✅ KernelGuard Verification Summary (`quick` profile)

- **Host Platform:** `darwin` (arm64)
- **Tests Evaluated:** **36** | **Passed:** 36 | **Failed:** 0 | **Skipped:** 0

### Key Verification Results
| Kernel | Status | Toolchain | Opt | FP Mode | Vectorized | Verdict | Details |
| :--- | :---: | :--- | :---: | :--- | :---: | :--- | :--- |
| `ggml_vec_dot_f32` | ✅ PASS | `gcc` | `-O0` | `strict` | - | `PASS` | Numerical contract verified (vectorized: False) |
| `ggml_vec_dot_f32` | ✅ PASS | `gcc` | `-O0` | `fast-math` | - | `PASS` | Numerical contract verified (vectorized: False) |
| `ggml_vec_dot_f32` | ✅ PASS | `gcc` | `-O2` | `strict` | - | `PASS` | Numerical contract verified (vectorized: False) |
| `ggml_vec_dot_f32` | ✅ PASS | `gcc` | `-O2` | `fast-math` | - | `PASS` | Numerical contract verified (vectorized: False) |
| `ggml_vec_dot_f32` | ✅ PASS | `gcc` | `-O3` | `strict` | - | `PASS` | Numerical contract verified (vectorized: False) |
| `ggml_vec_dot_f32` | ✅ PASS | `gcc` | `-O3` | `fast-math` | - | `PASS` | Numerical contract verified (vectorized: False) |
| `ggml_vec_dot_f32` | ✅ PASS | `clang` | `-O0` | `strict` | - | `PASS` | Numerical contract verified (vectorized: False) |
| `ggml_vec_dot_f32` | ✅ PASS | `clang` | `-O0` | `fast-math` | - | `PASS` | Numerical contract verified (vectorized: False) |
| `ggml_vec_dot_f32` | ✅ PASS | `clang` | `-O2` | `strict` | Yes | `PASS` | Numerical contract verified (vectorized: True) |
| `ggml_vec_dot_f32` | ✅ PASS | `clang` | `-O2` | `fast-math` | Yes | `PASS` | Numerical contract verified (vectorized: True) |
| `ggml_vec_dot_f32` | ✅ PASS | `clang` | `-O3` | `strict` | Yes | `PASS` | Numerical contract verified (vectorized: True) |
| `ggml_vec_dot_f32` | ✅ PASS | `clang` | `-O3` | `fast-math` | Yes | `PASS` | Numerical contract verified (vectorized: True) |
| `ggml_vec_silu_f32` | ✅ PASS | `gcc` | `-O0` | `strict` | - | `PASS` | Numerical contract verified (vectorized: False) |
| `ggml_vec_silu_f32` | ✅ PASS | `gcc` | `-O0` | `fast-math` | - | `PASS` | Numerical contract verified (vectorized: False) |
| `ggml_vec_silu_f32` | ✅ PASS | `gcc` | `-O2` | `strict` | - | `PASS` | Numerical contract verified (vectorized: False) |
| `ggml_vec_silu_f32` | ✅ PASS | `gcc` | `-O2` | `fast-math` | - | `PASS` | Numerical contract verified (vectorized: False) |
| `ggml_vec_silu_f32` | ✅ PASS | `gcc` | `-O3` | `strict` | - | `PASS` | Numerical contract verified (vectorized: False) |
| `ggml_vec_silu_f32` | ✅ PASS | `gcc` | `-O3` | `fast-math` | - | `PASS` | Numerical contract verified (vectorized: False) |
| `ggml_vec_silu_f32` | ✅ PASS | `clang` | `-O0` | `strict` | - | `PASS` | Numerical contract verified (vectorized: False) |
| `ggml_vec_silu_f32` | ✅ PASS | `clang` | `-O0` | `fast-math` | - | `PASS` | Numerical contract verified (vectorized: False) |
| `ggml_vec_silu_f32` | ✅ PASS | `clang` | `-O2` | `strict` | Yes | `PASS` | Numerical contract verified (vectorized: True) |
| `ggml_vec_silu_f32` | ✅ PASS | `clang` | `-O2` | `fast-math` | Yes | `PASS` | Numerical contract verified (vectorized: True) |
| `ggml_vec_silu_f32` | ✅ PASS | `clang` | `-O3` | `strict` | Yes | `PASS` | Numerical contract verified (vectorized: True) |
| `ggml_vec_silu_f32` | ✅ PASS | `clang` | `-O3` | `fast-math` | Yes | `PASS` | Numerical contract verified (vectorized: True) |
| `ggml_vec_norm_f32` | ✅ PASS | `gcc` | `-O0` | `strict` | - | `PASS` | Numerical contract verified (vectorized: False) |
| `ggml_vec_norm_f32` | ✅ PASS | `gcc` | `-O0` | `fast-math` | - | `PASS` | Numerical contract verified (vectorized: False) |
| `ggml_vec_norm_f32` | ✅ PASS | `gcc` | `-O2` | `strict` | - | `PASS` | Numerical contract verified (vectorized: False) |
| `ggml_vec_norm_f32` | ✅ PASS | `gcc` | `-O2` | `fast-math` | - | `PASS` | Numerical contract verified (vectorized: False) |
| `ggml_vec_norm_f32` | ✅ PASS | `gcc` | `-O3` | `strict` | Yes | `PASS` | Numerical contract verified (vectorized: True) |
| `ggml_vec_norm_f32` | ✅ PASS | `gcc` | `-O3` | `fast-math` | Yes | `PASS` | Numerical contract verified (vectorized: True) |
| `ggml_vec_norm_f32` | ✅ PASS | `clang` | `-O0` | `strict` | - | `PASS` | Numerical contract verified (vectorized: False) |
| `ggml_vec_norm_f32` | ✅ PASS | `clang` | `-O0` | `fast-math` | - | `PASS` | Numerical contract verified (vectorized: False) |
| `ggml_vec_norm_f32` | ✅ PASS | `clang` | `-O2` | `strict` | Yes | `PASS` | Numerical contract verified (vectorized: True) |
| `ggml_vec_norm_f32` | ✅ PASS | `clang` | `-O2` | `fast-math` | Yes | `PASS` | Numerical contract verified (vectorized: True) |
| `ggml_vec_norm_f32` | ✅ PASS | `clang` | `-O3` | `strict` | Yes | `PASS` | Numerical contract verified (vectorized: True) |
| `ggml_vec_norm_f32` | ✅ PASS | `clang` | `-O3` | `fast-math` | Yes | `PASS` | Numerical contract verified (vectorized: True) |

> Generated automatically by [KernelGuard](https://github.com/igotlinux/kernal-guard)
