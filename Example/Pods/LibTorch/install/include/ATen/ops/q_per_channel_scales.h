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



#include <ATen/ops/q_per_channel_scales_ops.h>

namespace at {


// aten::q_per_channel_scales(Tensor self) -> Tensor
inline at::Tensor q_per_channel_scales(const at::Tensor & self) {
    return at::_ops::q_per_channel_scales::call(self);
}

// aten::q_per_channel_scales.out(Tensor self, *, Tensor(a!) out) -> Tensor(a!)
inline at::Tensor & q_per_channel_scales_out(at::Tensor & out, const at::Tensor & self) {
    return at::_ops::q_per_channel_scales_out::call(self, out);
}

// aten::q_per_channel_scales.out(Tensor self, *, Tensor(a!) out) -> Tensor(a!)
inline at::Tensor & q_per_channel_scales_outf(const at::Tensor & self, at::Tensor & out) {
    return at::_ops::q_per_channel_scales_out::call(self, out);
}

}