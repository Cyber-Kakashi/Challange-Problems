#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
using namespace std;


int main() {
    int numOfArrays, numOfqueries;
    vector<int> arrayLengths;
    vector<vector<int>> arrays, queries;
    vector<int> tempVecinsert;
    
    cin >> numOfArrays >> numOfqueries;
    for (int i = 0; i < numOfArrays; i++) {
        int tem;
        cin >> tem;
        arrayLengths.push_back(tem);
        tempVecinsert.clear();
        for (int j = 0; j < arrayLengths[i]; j++) {
            int temp;
            cin >> temp;
            tempVecinsert.push_back(temp);
        }
        arrays.push_back(tempVecinsert);
    }

    tempVecinsert.clear();
    for (int i = 0; i < numOfqueries; i++) {
        for (int j = 0; j < 2; j++) {
            int temp;
            cin >> temp;
            tempVecinsert.push_back(temp);
        }
        queries.push_back(tempVecinsert);
        tempVecinsert.clear();
    }

    for (int i = 0; i < numOfqueries; i++) {
        cout << arrays[queries[i][0]][queries[i][1]] << endl;
    }
    
    return 0;
}