#include <iostream>
#include "activation_function.h"
#include "sigmoid.h"
#include "relu.h"

/**
 * Main function - entry point to the program
 * @author Marcelo Fialho Jacinto
 * @date 24/05/2020
 */
int main (int argc, char ** argv) {

    ActivationFunction * sigmoid = new Sigmoid();
    ActivationFunction * relu = new Relu();

    std::cout << "Testing the Activation Function\n";
    std::cout << sigmoid->calculateOutput(3);
    std::cout << "\n";

    std::cout << "Testing the Relu Function\n";
    std::cout << relu->calculateOutput(3);
    std::cout << "\n";
    std::cout << relu->calculateOutput(-1);
    std::cout << "\n";

    delete(sigmoid);
    delete(relu);
    return EXIT_SUCCESS;
}