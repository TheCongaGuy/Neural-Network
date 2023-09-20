// Class represents a single neuron of a neural network
#include <vector>
#include <random>
#include <time.h>

class Neuron
{
public:
    // Constructor
    Neuron(int inputSynapses);

    // Get's the weights of the neuron
    std::vector<double> getWeights();
    // Get's the registered number of synapses
    int getSynapseCount();

private:
    int inputSynapses;
    std::vector<double> weight;

    // Initializes random weights for each synapse
    void __initWeights();
};