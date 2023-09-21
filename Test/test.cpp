// Definitions for Test Cases
#include "Test.hpp"

// Runs all test cases
void allTests()
{
    HighLowWeights();
}

void HighLowWeights()
{
    // Records highest and lowest recorded weights
    float highest = 0, lowest = 1;

    // Instantiate 200 Neurons
    Neuron testNeurons[200];

    // Find the highest and lowest weight values for the array of neurons
    for (Neuron neuron : testNeurons)
        for (float weight : neuron.getWeights())
        {
            if (weight < lowest)
                lowest = weight;
            
            if (weight > highest)
                highest = weight;
        }
    
    // Display findings to the output file
    outputFile << "----- Weight Range -----" << std::endl
               << "High: " << highest << " | Low: " << lowest << std::endl;
    
    // If there is an improbably scewed high and low, exit with an error
    if (highest < 0.7 && lowest > 0.2)
        exit(-1);
}