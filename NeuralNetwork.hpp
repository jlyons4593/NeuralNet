#include <vector>
class NeuralNetwork{
    public:
        NeuralNetwork(int num_inputs, int num_outputs, std::vector<int> layer_sizes)
        :
        num_inputs_(num_inputs),
        num_outputs_(num_outputs),
        layer_sizes_(layer_sizes){
          int num_layers = layer_sizes_.size();
          weights_.resize(num_layers);
          biases_.resize(num_layers);
          for (int i = 0; i < num_layers; i++) {
            weights_[i].resize(layer_sizes_[i]);
            biases_[i].resize(layer_sizes_[i]);
          }
        }
    private:
      int num_inputs_;
      int num_outputs_;
      std::vector<int> layer_sizes_;
      std::vector<std::vector<float> > weights_;
      std::vector<std::vector<float> > biases_;

      void initializeWeightsandBiases(int num_layers){
        
      }
};










