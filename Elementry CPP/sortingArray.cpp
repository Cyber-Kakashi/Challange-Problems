#include <iostream>
#include <cstdlib>
#include <string>
#include <vector>
#include <sstream>
#include <limits>
#include <numeric>
#include <ctime>
#include <algorithm>

using namespace std; 
  
vector<int> GenRandVector(int length, int min, int max);

int main() {
    int len, min, max, option = 0;
    cout << "Enter length, min value and max value of the vector to be generated as space seperated values ex: 5 10 30\n";
    cin >> len >> min >> max;
    vector<int> generatedVector = GenRandVector(len, min, max);
    cout << "\nUnsorted vector: ";
    for (int i = 0; i < generatedVector.size(); i++) {
        printf("%d ", generatedVector[i]);
    }

    cout << "\nSelect the sorting order (1)Asc (2)Desc: ";
    cin >> option;

    sort(generatedVector.begin(), generatedVector.end(), [option](int x, int y) { 
        if (option == 1) {
            return x < y; 
        } else if (option == 2) {
            return x > y;
        } else {
            return x < y;
        }
    });
    cout << "\nSorted vector: ";
    for (auto num: generatedVector) {
        cout << num << " ";
    }

    return 0;    
}

vector<int> GenRandVector(int length, int min, int max) {
    srand(time(0));
    vector<int> temp;
    for (int i = 0; i < length; i++) {
        temp.push_back(min + (rand() % (max - min + 1)));
    }
    return temp;
}
