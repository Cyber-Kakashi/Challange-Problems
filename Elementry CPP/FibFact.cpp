#include <iostream>
#include <cstdlib>
#include <string>
#include <vector>
#include <sstream>
#include <limits>
#include <numeric>
#include <ctime>

using namespace std; 
  
int Factorial(int num);
int Fibonacci(int num);

int main() { 
    int fact;
    cout << "Enter a number: ";
    cin >> fact;
    int option = 0;
    cout << "(1)Factorial  (2)Fibonacci, Enter your option: ";
    cin >> option;

    switch (option)
    {
    case 1:
        cout << "\nFactorial: " << Factorial(fact);
        break;
    
    case 2:
        cout << "Fibonacci: " << Fibonacci(fact);
        break;

    default:
        cout << "Wrong option..";
        break;
    }

    return 0;
}

int Factorial(int num) {
    if (num <= 1) {
        return 1;
    } else {
        return num * Factorial(num -1);
    }
}

int Fibonacci(int num) {
    
    if (num < 2) {
        return num;
    } else {
        return Fibonacci(num - 2) + Fibonacci(num -1);
    }
}