// Copyright (c) 2019 Davin Rousseau All rights reserved
//
// Created by: Davin Rousseau
// Created on October 2019
// this program uses a while loop
// To calculate the sum of consecutive numbers up to a chosen number

#include <iostream>
#include <string>

int main() {
    // this function calculates sum of two integers
    std::string numberInput;
    int number;
    int loopCounter = 0;
    int answer = 1;

    // input
    std::cout << "Enter a positive integer: ";
    std::cin >> numberInput;

    // process and output
    try {
        number = std::stoi(numberInput);

        while (loopCounter < number) {
            std::cout << loopCounter << " times through loop."
                                     << std::endl;
            loopCounter = loopCounter + 1;
            answer = answer * loopCounter;
    }
     std::cout << "" << std::endl;
        std::cout << "The factorial of the given number is: "
                  << answer << std::endl;
    return 0;
}
    catch (std::invalid_argument) {
        std::cout << "Invalid input.";
    }
}
