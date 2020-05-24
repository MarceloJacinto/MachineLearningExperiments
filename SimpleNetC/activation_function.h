#if !defined(ACTIVATION_FUNCTION)
#define ACTIVATION_FUNCTION

/**
 * An interface for activation functions to be used for each neuron. It defines the calculateOutput public
 * virtual function that must be implemented by a class that inherits it. Examples of this functions can be the
 * sigmoid function
 * @author Marcelo Fialho Jacinto
 * @date 24/05/2020
 * @see Sigmoid
 */
class ActivationFunction {

    public:
        /* Virtual destructor to guarantee that the correct distructor is called when deleting an object from memory */
        virtual ~ActivationFunction() {};
        /* Defining the virtual/abstract method to actually make the calculation */
        virtual double calculateOutput(double input) = 0;
};

#endif // ACTIVATION_FUNCTION
