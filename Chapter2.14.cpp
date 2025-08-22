/*Program File Name: Checkpoint2.14
Programmer: Marcos Tomala
Date: August 2025
Requirements: 
Write a program that has the following variables:
first middle and last. Store your initials in these Variables then
display them on the screern
*/


#include <iostream>

int main()
{
    char firstInitial;
    char middleInitial;
    char lastInitial;
    std::string firstName;
    std::cout << "Please enter the initial of your first name:";
    std::cin >> firstInitial;
    std::cout << "Please enter the initial of your middle name:";
    std::cin >> middleInitial;
    std::cout << "Please enter the initial of your last name:";
    std::cin >> lastInitial;
    std::cout << "Your initals are: " << firstInitial << middleInitial << lastInitial;
    std::cin >> lastInitial;
    std::cout << "Your initals are: " << firstInitial << middleInitial << lastInitial << std::endl;
    std::cout << "Please enter your first name:";
    std::cin >> firstName;
    std::cout << "Your first name is : " << firstName;
}

