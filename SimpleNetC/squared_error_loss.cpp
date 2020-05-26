#include <cmath> 
#include "squared_error_loss.h"

/**
 * Calculate the SquaredErrorLoss function using the formula L(y_hat, y) = 1/2 * (y_hat - y)^2
 * @author Marcelo Fialho Jacinto
 * @date 26/05/2020
 */
double SquaredErrorLoss::calculateLoss(double predicted, double real) {
    // L(y_hat, y) = 1/2 * (y_hat - y)^2
    return 0.5 * pow(predicted - real, 2);
}
