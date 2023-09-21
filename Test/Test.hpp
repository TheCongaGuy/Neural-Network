// Test cases printed to a .log file
#include <fstream>
#include "../Network/Neuron.hpp"

// Public Output File
static std::ofstream outputFile("Test_Data.log");

// Run All Tests
void allTests();

// Create 200 instances of a Neuron and take the highest weight and the lowest weight recorded
void HighLowWeights();

// Create 2 Neurons and run the same input on both
void FireNeuron();

// Helper Method compares two doubles to check if they are the same
bool __isEqual(double val1, double val2);