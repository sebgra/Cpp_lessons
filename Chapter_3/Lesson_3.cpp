#include <iostream>
#include "Lesson_3.h"

/* Declare 3 global variables to store the user inputs
    Variables are declared as global to be accessible out of any scope.
*/

int firstNumber = 0;
int secondNumber = 0;
int multiplicationResult = 0;

// Define MultiplyNumbers function

void MultiplyNumbers()
{
    // User inputs
    std::cout << "Enter the first number : " << std::endl;
    std::cin >> firstNumber;

    std::cout << "Enter the second number : " << std::endl;
    std::cin >> secondNumber;

    // Display result
    multiplicationResult = firstNumber * secondNumber;
    std::cout << "Displaying from MultiplyNumbers() : " << std::endl;
    std::cout << firstNumber << " * " << secondNumber << " = " << multiplicationResult << std::endl;
}

// Define main function

int main()
{
    std::cout << "This program will help you to multiply two numbers." << std::endl;

    // Call the function that does all the work
    MultiplyNumbers();

    std::cout << "Displaying from main() : " << std::endl;

    // This line will compile and work fine.

    std::cout << firstNumber << " * " << secondNumber << " = " << multiplicationResult << std::endl;
    return 0;
}