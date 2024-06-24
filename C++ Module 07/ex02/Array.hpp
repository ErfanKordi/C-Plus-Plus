#ifndef ARRAY_HPP
#define ARRAY_HPP

#include <stdexcept>

template <typename T>
class Array {
public:
    // Default constructor: Creates an empty array
    Array();

    // Constructor with size: Creates an array of n elements initialized by default
    Array(unsigned int n);

    // Copy constructor
    Array(const Array& other);

    // Assignment operator
    Array& operator=(const Array& other);

    // Destructor
    ~Array();

    // Subscript operator for accessing elements
    T& operator[](unsigned int index);
    const T& operator[](unsigned int index) const;

    // Member function to return the number of elements in the array
    unsigned int size() const;

private:
    unsigned int size_;
    T* data_;
};

#include "Array.cpp"

#endif // ARRAY_HPP
