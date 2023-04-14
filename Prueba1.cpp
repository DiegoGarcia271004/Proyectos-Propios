#include <iostream>
using namespace std;
const int currentYear = 2023;
int anio, edad;
int main()
{
    std::cout<<"Please insert your birth year: ";
    std::cin >> anio;
    edad = currentYear - anio;
    std::cout<<"You are "<<edad<<" years old";
    return 0;
}
