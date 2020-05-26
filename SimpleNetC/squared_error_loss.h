#if !defined(SQUARED_ERROR_LOSS)
#define SQUARED_ERROR_LOSS

#include "loss_function.h"

/**
 * Declaration of the class SquaredErrorLoss that implements the LossFunction interface
 * @author Marcelo Fialho Jacinto
 * @date 26/05/2020
 * @see loss_function
 */
class SquaredErrorLoss : public LossFunction {
    //Implemented in cpp file. Does not add any extra functionality than the one specified 
    //in the LossFunction interface
    public:
        double calculateLoss(double predicted, double real);
};

#endif // SQUARED_ERROR_LOSS
