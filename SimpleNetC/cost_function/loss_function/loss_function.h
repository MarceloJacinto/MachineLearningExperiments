#if !defined(LOSS_FUNCTION)
#define LOSS_FUNCTION

/**
 * An interface for loss functions to be used. It defines the calculateLoss public
 * virtual function that must be implemented by a class that inherits it. Examples of this functions can be the
 * the squared error
 * @author Marcelo Fialho Jacinto
 * @date 26/05/2020
 */
class LossFunction {
    
    public:
        /* Virtual destructor to guarantee that the correct distructor is called when deleting an object from memory */
        virtual ~LossFunction() {};
        /* Defining the virtual/abstract method to actually make the calculation */
        virtual double calculateLoss(double predicted, double real) = 0;
};

#endif // LOSS_FUNCTION
