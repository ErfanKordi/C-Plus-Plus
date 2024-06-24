#include <iostream>
#include "Array.hpp"

int main() {
    // Test default constructor
    Array<int> arr1;
    std::cout << "arr1 size: " << arr1.size() << std::endl; // Should print 0

    // Test constructor with size
    unsigned int n = 5;
    Array<int> arr2(n);
    std::cout << "arr2 size: " << arr2.size() << std::endl; // Should print 5
    for (unsigned int i = 0; i < arr2.size(); ++i) {
        std::cout << "arr2[" << i << "]: " << arr2[i] << std::endl; // Should print 0 for all elements
    }

    // Test copy constructor
    Array<int> arr3 = arr2;
    std::cout << "arr3 size: " << arr3.size() << std::endl; // Should print 5
    for (unsigned int i = 0; i < arr3.size(); ++i) {
        std::cout << "arr3[" << i << "]: " << arr3[i] << std::endl; // Should print 0 for all elements
    }

    // Modify original array and check copy
    arr2[2] = 42;
    std::cout << "arr2[2]: " << arr2[2] << std::endl; // Should print 42
    std::cout << "arr3[2]: " << arr3[2] << std::endl; // Should still print 0

    // Test assignment operator
    Array<int> arr4;
    arr4 = arr2;
    std::cout << "arr4 size: " << arr4.size() << std::endl; // Should print 5
    for (unsigned int i = 0; i < arr4.size(); ++i) {
        std::cout << "arr4[" << i << "]: " << arr4[i] << std::endl; // Should print same values as arr2
    }

    // Modify original array and check assigned copy
    arr2[3] = 99;
    std::cout << "arr2[3]: " << arr2[3] << std::endl; // Should print 99
    std::cout << "arr4[3]: " << arr4[3] << std::endl; // Should still print 0

    // Test out of bounds access
    try {
        std::cout << arr2[10] << std::endl; // Should throw exception
    } catch (const std::exception& e) {
        std::cerr << "Exception caught: " << e.what() << std::endl;
    }

    return 0;
}
