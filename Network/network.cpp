#include "Network.hpp"

// Neural Network constructor
NeuralNetwork::NeuralNetwork(int inputs, int outputs)
{
    // Resize for 1 hidden layer
    neuronMatrix.resize(3);

    // Set the number of input neurons
    neuronMatrix[0].resize(inputs);
    // Set the number of output neurons
    neuronMatrix[2].resize(outputs);
    // Set hidden layer neuron count to 5
    neuronMatrix[1].resize(5);

    // Assign synapse count to hidden and output layers
    for (int i = 0; i < 5; i++)
        neuronMatrix[1][i].setSynapseCount(inputs);
    
    for (int i = 0; i < outputs; i++)
        neuronMatrix[2][i].setSynapseCount(5);
    
    // Save the number of expected input and output points
    inputPoints = inputs;
    outputPoints = outputs;
}