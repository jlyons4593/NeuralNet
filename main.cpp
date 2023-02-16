#include<iostream>
#include "NeuralNetwork.hpp"
#include <vector>

#include <string>
#include <cmath>

<<<<<<< HEAD
=======

void initializeModelArchitecture(){
   
}
>>>>>>> bd813b80d4f061c6566473ae71d2fb9f678d8fd5



int main() {

    int num_inputs = 3;
    int num_outputs = 1;
    
    std::vector<int> layer_sizes = {64, 64, 64, 64};

    NeuralNetwork nn(num_inputs, num_outputs, layer_sizes);
<<<<<<< HEAD
    
    std::vector<std::vector<float>> biases = nn.getBiases();
    

    std::cout << std::to_string(biases[2][2])<< std::endl;
=======

    nn.initialize();
    std::vector<std::vector<float>> biases  = nn.getBiases();
    for (std::vector i: biases){
        for (float j: i){
            
            std::cout << std::to_string(j) << std::endl;
        }
    }
>>>>>>> bd813b80d4f061c6566473ae71d2fb9f678d8fd5
    

}

