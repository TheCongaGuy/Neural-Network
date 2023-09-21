// Class represents the collection of neurons forming a Neural Network
// Using the following article as a reference: https://medium.com/analytics-vidhya/building-a-simple-neural-network-in-c-7e917e9fc2cc
// Related Github Repo: https://github.com/lschmittalves/simple-neural-network
#include "Neuron.hpp"

class NeuralNetwork
{
public:
    // Constructor
    // Takes the number of datapoints in each input, and the number of datapoints in the output
    NeuralNetwork(int inputs, int outputs);

private:
    // Data Members
    std::vector<std::vector<Neuron>> neuronMatrix;
    int inputPoints, outputPoints;
};