#include <cmath> 
#include "sigmoid.h"

/**
 * @author Marcelo Fialho Jacinto
 * @date 24/05/2020
 */

double Sigmoid::calculateOutput(double input) {
    return 1 / (1 + exp(-input));
}
