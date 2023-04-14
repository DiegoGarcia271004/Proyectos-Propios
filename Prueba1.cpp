#include <iostream>
using namespace std;
const int currentYear = 2023;
int anio, edad;
int main()
{
    cout<<"Please insert your birth year: ";
    cin >> anio;
    edad = currentYear - anio;
    cout<<"You are "<<edad<<" years old";
    return 0;
}
