// A simple program that computes the square root of a number
#include <cmath>
#include <iostream>
#include <string>

#include "config.h"

int main(int argc, char* argv[]) {
    if (argc < 2) {
        std::cout << argv[0] << " version " << VERSION_MAJOR << "." << VERSION_MINOR
                  << "." << VERSION_PATCH << std::endl;
        std::cout << "Usage: " << argv[0] << " number" << std::endl;
        return 1;
    }

    const double inputValue = std::stod(argv[1]);

    // calculate square root
    const double outputValue = sqrt(inputValue);
    std::cout << "The square root of " << inputValue << " is " << outputValue
              << std::endl;
    return 0;
}
