#if !defined(RELU)
#define RELU

#include "activation_function.h"

/**
 * Declaration of the class Relu that implements the ActivationFunction interface
 * @author Marcelo Fialho Jacinto
 * @date 26/05/2020
 * @see activationFunction
 */
class Relu : public ActivationFunction {
    //Implemented in cpp file. Does not add any extra functionality than the one specified 
    //in the ActivationFunction interface
    public:
        double calculateOutput(double input);
};


#endif // RELU
