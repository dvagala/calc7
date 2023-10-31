#pragma once

// @generated by torchgen/gen.py from Operator.h

#include <tuple>
#include <vector>

// Forward declarations of any types needed in the operator signatures.
// We can't directly include these classes because it will cause circular include dependencies.
// This file is included by TensorBody.h, which defines the Tensor class.
#include <ATen/core/ATen_fwd.h>

namespace at {
namespace _ops {


struct TORCH_API _foreach_maximum_List {
  using schema = ::std::vector<at::Tensor> (at::TensorList, at::TensorList);
  using ptr_schema = schema*;
  // See Note [static constexpr char* members for windows NVCC]
  STATIC_CONSTEXPR_STR_INL_EXCEPT_WIN_CUDA(name, "aten::_foreach_maximum")
  STATIC_CONSTEXPR_STR_INL_EXCEPT_WIN_CUDA(overload_name, "List")
  STATIC_CONSTEXPR_STR_INL_EXCEPT_WIN_CUDA(schema_str, "_foreach_maximum.List(Tensor[] self, Tensor[] other) -> Tensor[]")
  static ::std::vector<at::Tensor> call(at::TensorList self, at::TensorList other);
  static ::std::vector<at::Tensor> redispatch(c10::DispatchKeySet dispatchKeySet, at::TensorList self, at::TensorList other);
};

struct TORCH_API _foreach_maximum__List {
  using schema = void (at::TensorList, at::TensorList);
  using ptr_schema = schema*;
  // See Note [static constexpr char* members for windows NVCC]
  STATIC_CONSTEXPR_STR_INL_EXCEPT_WIN_CUDA(name, "aten::_foreach_maximum_")
  STATIC_CONSTEXPR_STR_INL_EXCEPT_WIN_CUDA(overload_name, "List")
  STATIC_CONSTEXPR_STR_INL_EXCEPT_WIN_CUDA(schema_str, "_foreach_maximum_.List(Tensor(a!)[] self, Tensor[] other) -> ()")
  static void call(at::TensorList self, at::TensorList other);
  static void redispatch(c10::DispatchKeySet dispatchKeySet, at::TensorList self, at::TensorList other);
};

struct TORCH_API _foreach_maximum_List_out {
  using schema = void (at::TensorList, at::TensorList, at::TensorList);
  using ptr_schema = schema*;
  // See Note [static constexpr char* members for windows NVCC]
  STATIC_CONSTEXPR_STR_INL_EXCEPT_WIN_CUDA(name, "aten::_foreach_maximum")
  STATIC_CONSTEXPR_STR_INL_EXCEPT_WIN_CUDA(overload_name, "List_out")
  STATIC_CONSTEXPR_STR_INL_EXCEPT_WIN_CUDA(schema_str, "_foreach_maximum.List_out(Tensor[] self, Tensor[] other, *, Tensor(a!)[] out) -> ()")
  static void call(at::TensorList self, at::TensorList other, at::TensorList out);
  static void redispatch(c10::DispatchKeySet dispatchKeySet, at::TensorList self, at::TensorList other, at::TensorList out);
};

}} // namespace at::_ops
