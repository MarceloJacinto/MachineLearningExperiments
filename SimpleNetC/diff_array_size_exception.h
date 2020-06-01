#if !defined(DIFF_ARRAY_SIZE_EXCEPTION)
#define DIFF_ARRAY_SIZE_EXCEPTION

#include <exception>
#include <string>

class DiffArraySizeException : public std::exception {
    
    protected:
        static const std::string err_msg;
        std::string error_message;

    public:
    /** Constructor (C++ STL string)
     *  @param msg The error message
     */
    DiffArraySizeException(const std::string &msg);

    /*  Virtual Destructor to allow subclassing */
    virtual ~DiffArraySizeException() throw () {}

    /** Returns a pointer to the (constant) error description.
     *  @return A pointer to a const char*. The underlying memory
     *  is in possession of the Except object. Callers must
     *  not attempt to free the memory.
     */
    virtual const char* what() const throw ();
};


#endif // DIFF_ARRAY_SIZE_EXCEPTION
