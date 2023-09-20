#include "Neuron.hpp"

// Neuron Constructor
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
    // Set the seed for random number generation
    srand(time(NULL));

    // Resize and generate weights
    weight.resize(inputSynapses);
    for (int i = 0; i < inputSynapses; i++)
        weight[i] = (rand() / 10000.f);
}