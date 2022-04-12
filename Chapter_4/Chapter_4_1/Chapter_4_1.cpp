#include <iostream>
#include <string>

int main()
{

    std::string greetString("Hello std::string!");
    std::cout << greetString << std::endl;

    std::cout << "Enter a line of text : " << std::endl;
    std::string firstLine;
    std::getline(std::cin, firstLine);

    std::cout << "Enter another line of text : " << std::endl;
    std::string secondString;
    std::getline(std::cin, secondString);

    std::cout << "Result of concatenation: " << std::endl;
    std::string concatString = firstLine + " " + secondString;
    std::cout << concatString << std::endl;

    std::cout << "Copy of concatened string: " << std::endl;
    std::string aCopy = concatString;
    aCopy = concatString;

    std::cout << aCopy << std::endl;

    std::cout << "Length of concatenated string: " << concatString.length() << std::endl;

    return 0;
}