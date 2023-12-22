prog: ./Test/Test.hpp ./Network/Network.hpp ./Network/Neuron.hpp
	g++ -o main main.cpp ./Test/test.cpp ./Network/network.cpp ./Network/neuron.cpp
	./main