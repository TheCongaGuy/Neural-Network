// Test cases printed to a .log file
#include <fstream>
#include "../Network/Neuron.hpp"

// Public Output File
static std::ofstream outputFile("Test_Data.log");

// Run All Tests
void allTests();

// Create 200 instances of a Neuron and take the highest weight and the lowest weight recorded
void HighLowWeights();