// Entry Point for Application
#include <iostream>
#include "Network/Neuron.hpp"

int main(int argc, char** argv)
{
    Neuron testNeuron(3);

    auto weights = testNeuron.getWeights();

    for (int i = 0; i < testNeuron.getSynapseCount(); i++)
        std::cout << weights[i] << std::endl;
    
    std::cout << "Max Number: " << RAND_MAX << std::endl;

    return 0;
}