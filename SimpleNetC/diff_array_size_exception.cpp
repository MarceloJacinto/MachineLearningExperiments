#include "diff_array_size_exception.h"

const std::string DiffArraySizeException::err_msg = "Different array size exception: ";

DiffArraySizeException::DiffArraySizeException(const std::string &msg):
    error_message(msg){};

const char * DiffArraySizeException::what() const throw() {
    return (err_msg + error_message).c_str();
};