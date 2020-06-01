#include "relu.h"

/**
 * @author Marcelo Fialho Jacinto
 * @date 26/05/2020
 */
double Relu::calculateOutput(double input) {
    return (input > 0) ? input : 0;
}