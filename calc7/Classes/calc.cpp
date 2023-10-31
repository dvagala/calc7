#include <torch/script.h>

int lib_add(int a, int b) {

    torch::jit::Module edge_detection_ML_model;
    torch::Tensor t1 = torch::ones({2, 2}, torch::requires_grad());
    torch::Tensor t2 = torch::randn({2, 2});
    auto c = t1 + t2;
    
    return a + b;
}
