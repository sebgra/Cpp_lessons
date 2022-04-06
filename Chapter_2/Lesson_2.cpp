#include <iostream>
#include "Lesson_2.h"

// function definition (already declares in .h file)

int DemoConsoleOutput()
{

    std::cout << "This is a simple string literal" << std::endl;
    std::cout << "Writting number 5" << 5 << std::endl;
    std::cout << "Performing division 10 / 5 = " << 10 / 5 << std::endl;
    std::cout << "Pi when approximated is 22 / 7 = " << 22 / 7 << std::endl;
    std::cout << "Pi actually is 22 / 7 = " << 22.0 / 7 << std::endl;

    return 0;
}

int main()
{
    // Function called with the return to exit.
    return DemoConsoleOutput();
}