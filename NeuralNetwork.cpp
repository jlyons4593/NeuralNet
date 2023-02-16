#include <vector>
#include <ctime>
#include <cstdlib>
#include <cmath>

class NeuralNetwork{
    public:
      NeuralNetwork(std::vector<unsigned> &topology);
        

      //public wrapper of InitializeWightsandBiases function so it is callable outside of the class
      void feedForward(const std::vector<double> &inputVals);
      void backpropagate(const std::vector<double> &targetVals);
      void getResults(std::vector<double> &resultVals) const;
      
      
   
    private:
    
   
      //private sigmoid function for forward propagation function
      float sigmoid(float x) {
        return 1.0 / (1.0 + exp(-x));
      }
};










