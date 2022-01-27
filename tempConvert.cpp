// Copyright © 2022 Dylan Melo All rights reserved
//
// Created by Dylan Melo
// Created on January 2022
// This program asks user for degrees in
// celsius and displays it in fahrenheit.
#include <iostream>


void CalculateFahrenheit() {
    // declare variables
    std::string userString;
    float celsius;
    float fahrenheit;
    // greet user
    std::cout << "Welcome to the Celsius to Fahrenheit converter!";
    std::cout << std::endl;
    // get temperature in celsius
    std::cout << "Enter the temperature in celsius: ";
    std::getline(std::cin, userString);
    std::cout << std::endl;
    // error checking
    try {
        celsius = std::stof(userString);
        fahrenheit = (9.0 / 5.0) * celsius + 32;
        std::cout << celsius << " in fahrenheit is " << fahrenheit;
    }catch (std::invalid_argument) {
        std::cout << "Invalid input.\n";
    }
}


int main() {
    // call function
    CalculateFahrenheit();
}


