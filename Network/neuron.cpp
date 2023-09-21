#include "Neuron.hpp"

// Neuron Constructors
Neuron::Neuron(int numSynapses)
{
    // Save number of synapses
    inputSynapses = numSynapses;

    // Generate synapse weights
    __initWeights();
}

std::vector<double> Neuron::getWeights() { return weight; }
int Neuron::getSynapseCount() { return inputSynapses; }

// Resizes vector container and generates randomized starting weights
void Neuron::__initWeights()
{
    // Resize and generate weights
    weight.resize(inputSynapses);
    for (int i = 0; i < inputSynapses; i++)
        weight[i] = rand()/ (float)RAND_MAX;
}