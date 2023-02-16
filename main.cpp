#include<iostream>
#include "NeuralNetwork.hpp"
#include <vector>
#include <string>
#include <cmath>




int main() {
    
    int num_inputs = 3;
    int num_outputs = 1;
    
    std::vector<int> layer_sizes = {64, 64, 64, 64};

    NeuralNetwork nn(num_inputs, num_outputs, layer_sizes);
    
    std::vector<std::vector<float>> biases = nn.getBiases();
    

    std::cout << std::to_string(biases[2][2])<< std::endl;
    


}