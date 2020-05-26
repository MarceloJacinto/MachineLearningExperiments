#if !defined(COST_FUNCTION)
#define COST_FUNCTION

/**
 * An interface for cost functions to be used. It defines the calculateCost public
 * virtual function that must be implemented by a class that inherits it. Examples of this functions can be the
 * the squared error
 * @author Marcelo Fialho Jacinto
 * @date 26/05/2020
 */
class CostFunction {
    
    public:
        /* Virtual destructor to guarantee that the correct distructor is called when deleting an object from memory */
        virtual ~CostFunction() {};
        /* Defining the virtual/abstract method to actually make the calculation */
        virtual double calculateCost(double predicted[], double real[]) = 0;
};

#endif // COST_FUNCTION
