#pragma once

// @generated by torchgen/gen.py from Function.h

#include <ATen/Context.h>
#include <ATen/DeviceGuard.h>
#include <ATen/TensorUtils.h>
#include <ATen/TracerMode.h>
#include <ATen/core/Generator.h>
#include <ATen/core/Reduction.h>
#include <ATen/core/Tensor.h>
#include <c10/core/Scalar.h>
#include <c10/core/Storage.h>
#include <c10/core/TensorOptions.h>
#include <c10/util/Deprecated.h>
#include <c10/util/Optional.h>



#include <ATen/ops/eye_ops.h>

namespace at {


// aten::eye(int n, *, ScalarType? dtype=None, Layout? layout=None, Device? device=None, bool? pin_memory=None) -> Tensor
inline at::Tensor eye(int64_t n, at::TensorOptions options={}) {
    return at::_ops::eye::call(n, optTypeMetaToScalarType(options.dtype_opt()), options.layout_opt(), options.device_opt(), options.pinned_memory_opt());
}

// aten::eye(int n, *, ScalarType? dtype=None, Layout? layout=None, Device? device=None, bool? pin_memory=None) -> Tensor
inline at::Tensor eye(int64_t n, c10::optional<at::ScalarType> dtype, c10::optional<at::Layout> layout, c10::optional<at::Device> device, c10::optional<bool> pin_memory) {
    return at::_ops::eye::call(n, dtype, layout, device, pin_memory);
}

// aten::eye.m(int n, int m, *, ScalarType? dtype=None, Layout? layout=None, Device? device=None, bool? pin_memory=None) -> Tensor
inline at::Tensor eye(int64_t n, int64_t m, at::TensorOptions options={}) {
    return at::_ops::eye_m::call(n, m, optTypeMetaToScalarType(options.dtype_opt()), options.layout_opt(), options.device_opt(), options.pinned_memory_opt());
}

// aten::eye.m(int n, int m, *, ScalarType? dtype=None, Layout? layout=None, Device? device=None, bool? pin_memory=None) -> Tensor
inline at::Tensor eye(int64_t n, int64_t m, c10::optional<at::ScalarType> dtype, c10::optional<at::Layout> layout, c10::optional<at::Device> device, c10::optional<bool> pin_memory) {
    return at::_ops::eye_m::call(n, m, dtype, layout, device, pin_memory);
}

// aten::eye.out(int n, *, Tensor(a!) out) -> Tensor(a!)
inline at::Tensor & eye_out(at::Tensor & out, int64_t n) {
    return at::_ops::eye_out::call(n, out);
}

// aten::eye.out(int n, *, Tensor(a!) out) -> Tensor(a!)
inline at::Tensor & eye_outf(int64_t n, at::Tensor & out) {
    return at::_ops::eye_out::call(n, out);
}

// aten::eye.m_out(int n, int m, *, Tensor(a!) out) -> Tensor(a!)
inline at::Tensor & eye_out(at::Tensor & out, int64_t n, int64_t m) {
    return at::_ops::eye_m_out::call(n, m, out);
}

// aten::eye.m_out(int n, int m, *, Tensor(a!) out) -> Tensor(a!)
inline at::Tensor & eye_outf(int64_t n, int64_t m, at::Tensor & out) {
    return at::_ops::eye_m_out::call(n, m, out);
}

}