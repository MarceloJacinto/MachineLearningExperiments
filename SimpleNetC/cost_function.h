#if !defined(COST_FUNCTION)
#define COST_FUNCTION

#include "loss_function.h"

/**
 * 
 * @author Marcelo Fialho Jacinto
 * @date 26/05/2020
 */
class CostFunction {

    protected:
        LossFunction * lossFunction;
    
    public:
        /*Constructor to the abstract class of CostFunction */
        CostFunction(LossFunction * lossFunction);
        /* destructor to guarantee that the correct distructor is called when deleting an object from memory */
        ~CostFunction();
        /* Defining the method to actually make the calculation */
        double calculateCost(double predicted[], double real[]);
};

#endif // COST_FUNCTION
