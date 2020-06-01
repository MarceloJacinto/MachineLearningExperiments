#if !defined(SIGMOID)
#define SIGMOID

#include "activation_function.h"

/**
 * Declaration of the class Sigmoid that implements the ActivationFunction interface
 * @author Marcelo Fialho Jacinto
 * @date 24/05/2020
 * @see activationFunction
 */
class Sigmoid : public ActivationFunction {
    //Implemented in cpp file. Does not add any extra functionality than the one specified 
    //in the ActivationFunction interface
    public:
        double calculateOutput(double input);
};

#endif // SIGMOID
