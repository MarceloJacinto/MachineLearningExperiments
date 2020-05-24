#include <iostream>
#include "activation_function.h"
#include "sigmoid.h"

/**
 * Main function - entry point to the program
 * @author Marcelo Fialho Jacinto
 * @date 24/05/2020
 */
int main (int argc, char ** argv) {

    ActivationFunction * act = new Sigmoid();

    std::cout << "Testing the Activation Function\n";
    std::cout << act->calculateOutput(3);
    std::cout << "\n";

    delete(act);
    return EXIT_SUCCESS;
}