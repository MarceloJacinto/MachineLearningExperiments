#include <cmath> 
#include <cassert>
#include "log_loss.h"

/**
 * Calculate the Log Loss function using the formula L(y_hat, y) = -(ylog(y_hat) + (1-y)log(1-y_hat))
 * @author Marcelo Fialho Jacinto
 * @date 26/05/2020
 */
double LogLoss::calculateLoss(double predicted, double real) {
    // L(y_hat, y) = -(ylog(y_hat) + (1-y)log(1-y_hat))
    double y = real;
    double y_hat = predicted;
    double aux = 0;

    //Asserts floating point compatibility at compile time
    static_assert(std::numeric_limits<float>::is_iec559, "IEEE 754 required");

    if(y == 0) {
        return (y_hat == 1) ? INFINITY : -log(1-y_hat);
    } else if (y == 1) {
        return (y_hat == 0) ? INFINITY : -log(y_hat);
    } else {
        if(y_hat == 0) {
            aux = (y > 0) ? 1 : -1;
            return -(aux*(-INFINITY));
        } else if (y_hat == 1) {
            aux = (1-y > 0) ? 1 : -1;
            return -(aux*(-INFINITY));
        }

        return -((y*log(y_hat)) + ((1-y)*log(1-y_hat)));
    }
}
