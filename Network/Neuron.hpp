// Class represents a single neuron of a neural network
// Using the following article as a reference: https://medium.com/analytics-vidhya/building-a-simple-neural-network-in-c-7e917e9fc2cc
// Related Github Repo: https://github.com/lschmittalves/simple-neural-network
#include <vector>
#include <random>
#include <time.h>
#include <cmath>

class Neuron
{
public:
    // Constructors
    Neuron(int inputSynapses = 1);

    // Calculates what output is fired from the neuron given an input
    // Takes: an array of doubles with the same size as the synapse count
    // Returns: a normalized value between 0 and 1, representing the strength of the neuron's signal
    double Fire(double input[]);

    // Get's the weights of the neuron
    std::vector<double> getWeights();
    // Get's the registered number of synapses
    int getSynapseCount();

    // Set the number of synapses
    void setSynapseCount(int numSynapses);

private:
    // Data Members
    int inputSynapses;
    std::vector<double> weight;

    // Initializes random weights for each synapse
    void __initWeights();

    // Normalize the values
    double __normalOutput(double output);
};