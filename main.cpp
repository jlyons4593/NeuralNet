#include<iostream>
#include "NeuralNetwork.hpp"
#include <vector>
#include <string>

void initializeModelArchitecture(){
   
}



int main() {
    
    int num_inputs = 3;
    int num_outputs = 1;
    
    std::vector<int> layer_sizes = {4, 5, 6};

    NeuralNetwork nn(num_inputs, num_outputs, layer_sizes);
    nn.initialize();
    std::vector<std::vector<float>> biases  = nn.getBiases();
    for (std::vector i: biases){
        for (float j: i){
            
            std::cout << std::to_string(j) << std::endl;
        }
    }
    


}