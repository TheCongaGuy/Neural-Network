#include "Neuron.hpp"

// Neuron Constructors
Neuron::Neuron(int numSynapses)
{
    // Save number of synapses
    inputSynapses = numSynapses;

    // Generate synapse weights
    __initWeights();
}

// Calculates what output is fired from the neuron given an input
// Takes: an array of doubles with the same size as the synapse count
// Returns: a normalized value between 0 and 1, representing the strength of the neuron's signal
double Neuron::Fire(double input[])
{
    std::vector<double> conversionVector;

    for (int i = 0; i < inputSynapses; i++)
        conversionVector.push_back(input[i]);
    
    conversionVector.shrink_to_fit();

    return Fire(conversionVector);
}
double Neuron::Fire(std::vector<double> input)
{
    double sumValues = 0;

    for (int i = 0; i < inputSynapses; i++)
        sumValues += weight[i] * input[i];

    return __normalOutput(sumValues);
}

// Getter Methods
std::vector<double> Neuron::getWeights() { return weight; }
int Neuron::getSynapseCount() { return inputSynapses; }

// Set the number of synapses
void Neuron::setSynapseCount(int numSynapses)
{
    // Clear current weights
    weight.clear();

    // Set new synapse count
    inputSynapses = numSynapses;

    // Reinitialize the current weights
    __initWeights();
}

// Resizes vector container and generates randomized starting weights
void Neuron::__initWeights()
{
    // Resize and generate weights
    weight.resize(inputSynapses);
    for (int i = 0; i < inputSynapses; i++)
        weight[i] = (rand() - (RAND_MAX / 2)) / (RAND_MAX / 2.f);
}

// Normalizes the given output of a function (Called the activation function)
double Neuron::__normalOutput(double oldOutput)
{
    return 1.f / (1 + exp(oldOutput * -1.f));
}