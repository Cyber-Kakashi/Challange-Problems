#include <iostream>
#include <vector>
#include <string>
using namespace std;

int main() {
    string a, b;
    cin >> a >> b;
    int mat[a.size()+1][b.size()+1];

    for (int i = 0; i < a.size()+1; i++) {
        for (int j = 0; j < b.size()+1; j++) {
            mat[i][j] = 0;
        }
    }

    for(int i = 1; i <= a.size(); i++) {
        for (int j = 1; j <= b.size(); j++) {
            if (a[i - 1] == b[j-1]) {
                mat[i][j] = 1 + mat[i-1][j-1]; 
            } else {
                mat[i][j] = max(mat[i][j-1], mat[i-1][j]);
            }
        }
    }
    cout <<"================================================\n";
    for (int i = 0; i < b.size(); i++) {
        cout << "\t" << b[i];
    }
    cout << endl;
    for (int i = 0; i < a.size(); i++) {
        cout << a[i];
        for (int j = 0; j < b.size(); j++) {
            cout << "\t" << mat[i+1][j+1];
        }
        cout << endl;
    }
    cout <<"================================================\n";

    cout << "Size of longest common subsequence: " << mat[a.size()][b.size()];
    return 0;
}