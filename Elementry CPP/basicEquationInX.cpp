#include <iostream>
#include <cstdlib>
#include <string>
#include <vector>
#include <sstream>
#include <limits>
#include <numeric>
#include <ctime>

using namespace std; 
  
void SolveForX(string sEquation, char seperator);
vector<string> StringToVector(string sString, char seperator);

int main() { 
    string Equation = "";
    cout << "Enter the equation (x + num1 = num2): ";
    getline(cin, Equation);
    SolveForX(Equation, ' ');

    return 0;
}

vector<string> StringToVector(string sString, char seperator) {
    stringstream ssString(sString);
    string sIndivStr;
    vector<string> vecWords;
    while(getline(ssString, sIndivStr, seperator)) {
        vecWords.push_back(sIndivStr);
    }
    
    return vecWords;
}

void SolveForX(string sEquation, char seperator) {
    vector<string> vecEquation = StringToVector(sEquation, seperator);
    int num1 = stoi(vecEquation[2]);
    int num2 = stoi(vecEquation[4]);

    cout << "X = " << num2 - num1;
}