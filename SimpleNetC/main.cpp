#include <iostream>
#include "activation_function.h"
#include "sigmoid.h"
#include "relu.h"

#include "loss_function.h"
#include "log_loss.h"
#include "squared_error_loss.h"

/**
 * Main function - entry point to the program
 * @author Marcelo Fialho Jacinto
 * @date 24/05/2020
 */
int main (int argc, char ** argv) {

    ActivationFunction * sigmoid = new Sigmoid();
    ActivationFunction * relu = new Relu();

    LossFunction * logLoss = new LogLoss();
    LossFunction * squaredErrorLoss = new SquaredErrorLoss();


    std::cout << "Testing the Activation Function\n";
    std::cout << sigmoid->calculateOutput(3);
    std::cout << "\n";

    std::cout << "Testing the Relu Function\n";
    std::cout << relu->calculateOutput(3);
    std::cout << "\n";
    std::cout << relu->calculateOutput(-1);
    std::cout << "\n";

    std::cout << "Testing the Log Loss Function\n";
    std::cout << logLoss->calculateLoss(0,1);
    std::cout << "\n";
    std::cout << logLoss->calculateLoss(1,1);
    std::cout << "\n";

    std::cout << "Testing the Squared error loss Function\n";
    std::cout << squaredErrorLoss->calculateLoss(0,1);
    std::cout << "\n";
    std::cout << squaredErrorLoss->calculateLoss(1,1);
    std::cout << "\n";

    delete(sigmoid);
    delete(relu);
    delete(logLoss);
    delete(squaredErrorLoss);
    return EXIT_SUCCESS;
}