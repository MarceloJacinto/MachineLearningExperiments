#if !defined(LOG_LOSS)
#define LOG_LOSS

#include "loss_function.h"

/**
 * Declaration of the class LogLoss that implements the LossFunction interface
 * @author Marcelo Fialho Jacinto
 * @date 26/05/2020
 * @see loss_function
 */
class LogLoss : public LossFunction {
    //Implemented in cpp file. Does not add any extra functionality than the one specified 
    //in the LossFunction interface
    public:
        double calculateLoss(double predicted, double real);
};

#endif // LOG_LOSS
