// Test cases printed to a .log file
#pragma once
#include <fstream>
#include "../Network/Network.hpp"

// Public Output File
static std::ofstream outputFile("Test_Data.log");

// Run All Tests
void allTests();

// Create 200 instances of a Neuron and take the highest weight and the lowest weight recorded
void HighLowWeights();

// Create 2 Neurons and run the same input on both
void FireNeuron();

// Demonstrate a very simple randomized neural network without training
// Less of a test, more of a proof of concept
void SimpleNetwork();

// Helper Method compares two doubles to check if they are the same
bool __isEqual(double val1, double val2);