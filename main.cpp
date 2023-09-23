// Entry Point for Application
#include <iostream>
#include "Test/Test.hpp"

int main(int argc, char** argv)
{
    srand(time(NULL));

    allTests();

    NeuralNetwork testNetwork(3, 2);

    auto results = testNetwork.Think({1, 0, 1});

    if (results[0] > results[1])
        std::cout << "1 + 0 + 1 is even!" << std::endl;
    
    else
        std::cout << "1 + 0 + 1 is odd!" << std::endl;

    return 0;
}