#include "cost_function.h"
#include "diff_array_size_exception.h"
/**
 * Calculate the Log Loss function using the formula L(y_hat, y) = -(ylog(y_hat) + (1-y)log(1-y_hat))
 * @author Marcelo Fialho Jacinto
 * @date 31/05/2020
 */


CostFunction::CostFunction(LossFunction * lossFunction): 
    lossFunction(lossFunction) {}

CostFunction::~CostFunction() {
    if(CostFunction::lossFunction != NULL) delete lossFunction;
}

double CostFunction::calculateCost(double predicted[], double real[]) {
    /* Check if predicted and real have the same size */
    if predicted
}