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

// Takes an input and generates an output
std::vector<double> NeuralNetwork::Think(double inputs[])
{
    std::vector<double> conversionVector(inputPoints);

    for (int i = 0; i < inputPoints; i++)
        conversionVector[i] = inputs[i];
    
    return Think(conversionVector);
}
std::vector<double> NeuralNetwork::Think(std::vector<double> inputs)
{
    std::vector<double> intermediate(inputPoints);

    // Calculate intitial inputs
    for (int i = 0; i < inputPoints; i++)
        intermediate[i] = neuronMatrix[0][i].Fire(inputs);
    
    std::vector<double> hiddenResults(5);

    // Pass values into hidden layer
    for (int i = 0; i < 5; i++)
        hiddenResults[i] = neuronMatrix[1][i].Fire(intermediate);
    
    std::vector<double> results(outputPoints);

    // Pass hidden values into output neurons
    for (int i = 0; i < outputPoints; i++)
        results[i] = neuronMatrix[2][i].Fire(hiddenResults);
    
    return results;
}