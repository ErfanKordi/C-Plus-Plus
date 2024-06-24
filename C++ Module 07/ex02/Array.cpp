#include "Array.hpp"

// Default constructor: Creates an empty array
template <typename T>
Array<T>::Array() : size_(0), data_(nullptr) {}

// Constructor with size: Creates an array of n elements initialized by default
template <typename T>
Array<T>::Array(unsigned int n) : size_(n), data_(new T[n]()) {}

// Copy constructor
template <typename T>
Array<T>::Array(const Array &other) : size_(other.size_), data_(new T[other.size_])
{
    for (unsigned int i = 0; i < size_; ++i)
    {
        data_[i] = other.data_[i];
    }
}

// Assignment operator
template <typename T>
Array<T> &Array<T>::operator=(const Array &other)
{
    if (this != &other)
    {
        delete[] data_;
        size_ = other.size_;
        data_ = new T[size_];
        for (unsigned int i = 0; i < size_; ++i)
        {
            data_[i] = other.data_[i];
        }
    }
    return *this;
}

// Destructor
template <typename T>
Array<T>::~Array()
{
    delete[] data_;
}

// Subscript operator for accessing elements
template <typename T>
T &Array<T>::operator[](unsigned int index)
{
    if (index >= size_)
    {
        throw std::out_of_range("Index out of bounds");
    }
    return data_[index];
}

template <typename T>
const T &Array<T>::operator[](unsigned int index) const
{
    if (index >= size_)
    {
        throw std::out_of_range("Index out of bounds");
    }
    return data_[index];
}

// Member function to return the number of elements in the array
template <typename T>
unsigned int Array<T>::size() const
{
    return size_;
}
