#include<iostream>
#include "NeuralNetwork.hpp"
#include <vector>

void initializeModelArchitecture(){
   
}

int main() {
    int num_inputs = 3;
    int num_outputs = 1;
    std::vector<int> layer_sizes = {4, 5, 6};

    NeuralNetwork nn(num_inputs, num_outputs, layer_sizes);
    std::cout << "working..." << std::endl;
}

