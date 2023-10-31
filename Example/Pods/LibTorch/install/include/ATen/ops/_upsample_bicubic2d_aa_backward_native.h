#pragma once

// @generated by torchgen/gen.py from NativeFunction.h

#include <c10/core/Scalar.h>
#include <c10/core/Storage.h>
#include <c10/core/TensorOptions.h>
#include <c10/util/Deprecated.h>
#include <c10/util/Optional.h>
#include <c10/core/QScheme.h>
#include <ATen/core/Reduction.h>
#include <ATen/core/Tensor.h>
#include <tuple>
#include <vector>
#include <ATen/ops/_upsample_bicubic2d_aa_backward_meta.h>

namespace at {
namespace native {
TORCH_API at::Tensor _upsample_bicubic2d_aa_backward(const at::Tensor & grad_output, at::OptionalIntArrayRef output_size, at::IntArrayRef input_size, bool align_corners, c10::optional<at::ArrayRef<double>> scale_factors);
TORCH_API at::Tensor & _upsample_bicubic2d_aa_backward_vec_out_symint(const at::Tensor & grad_output, at::OptionalSymIntArrayRef output_size, c10::SymIntArrayRef input_size, bool align_corners, c10::optional<at::ArrayRef<double>> scale_factors, at::Tensor & out);
struct TORCH_API structured__upsample_bicubic2d_aa_backward_out_cpu : public at::meta::structured__upsample_bicubic2d_aa_backward {
void impl(const at::Tensor & grad_output, at::ArrayRef<int64_t> output_size, at::ArrayRef<int64_t> input_size, bool align_corners, c10::optional<double> scales_h, c10::optional<double> scales_w, const at::Tensor & grad_input);
};
struct TORCH_API structured__upsample_bicubic2d_aa_backward_out_cuda : public at::meta::structured__upsample_bicubic2d_aa_backward {
void impl(const at::Tensor & grad_output, at::ArrayRef<int64_t> output_size, at::ArrayRef<int64_t> input_size, bool align_corners, c10::optional<double> scales_h, c10::optional<double> scales_w, const at::Tensor & grad_input);
};
} // namespace native
} // namespace at
