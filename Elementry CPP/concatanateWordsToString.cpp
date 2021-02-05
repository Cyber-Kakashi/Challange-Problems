#include <iostream>
#include <cstdlib>
#include <string>
#include <vector>
#include <sstream>
#include <limits>
#include <numeric>
#include <ctime>

using namespace std; 
  
string vectorToString (vector<string> vecsWords, char cSeperator);

int main() {  
    vector<string> vecsWords;
    vecsWords.push_back("This");
    vecsWords.push_back("is");
    vecsWords.push_back("a");
    vecsWords.push_back("string");

    cout << vectorToString(vecsWords, ' ');

    return 0;
}

string vectorToString (vector<string> vecsWords, char cSeperator) {
    string sSentence = "";
    for (auto words: vecsWords) {
        sSentence = sSentence.length() == 0 ? (sSentence + words) : (sSentence + cSeperator + words);
    }

    return sSentence;
}