// Definitions for Test Cases
#include "Test.hpp"

// Runs all test cases
void allTests()
{
    HighLowWeights();
    FireNeuron();
}

// Record the highest and lowest output of 200 neurons
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
}

// Fire two Neurons and record their independent output
void FireNeuron()
{
    outputFile << std::endl << "----- Neuron Activation -----" << std::endl;

    Neuron testNeuron1(3), testNeuron2(3);
    double input[] = {1, 0, 1};

    // Check that the output is the same each time
    if (!__isEqual(testNeuron1.Fire(input), testNeuron1.Fire(input)))
        outputFile << "WARNING: Neuron output differed in test1." << std::endl
                   << testNeuron1.Fire(input) << " vs " << testNeuron1.Fire(input) << std::endl;
    
    if (!__isEqual(testNeuron2.Fire(input), testNeuron2.Fire(input)))
        outputFile << "WARNING: Neuron output differed in test2." << std::endl
                   << testNeuron2.Fire(input) << " vs " << testNeuron2.Fire(input) << std::endl;
    
    // Output the values of the two neurons
    outputFile << "With Input [1, 0, 1] -" << std::endl
               << "Neuron 1: " << testNeuron1.Fire(input) << std::endl
               << "Neuron 2: " << testNeuron2.Fire(input) << std::endl;
}

// Helper Method to compare doubles
bool __isEqual(double val1, double val2)
{
    double diff = abs(val1 - val2);

    if (diff > 0.000001)
        return false;
    
    return true;
}