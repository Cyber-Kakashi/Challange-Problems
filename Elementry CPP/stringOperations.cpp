#include <iostream>
#include <cstdlib>
#include <string>
#include <vector>
#include <sstream>
#include <limits>
#include <numeric>
#include <ctime>

using namespace std; 
  
vector<int> findIndicesOfSubstring(string sSent, string sMatcher);
void replaceWithSubstring(string sSent, string sMatcher, string sReplacer);

int main() {  
    string sSentence = "", sFind = "", sReplace = "";
    int iOption = 0;
    cout << "Enter a sentence: ";
    getline(cin, sSentence);
    cout << "Select an option: 1.Finding 2.Replacing";
    cin >> iOption;
    switch (iOption)
    {
    case 1:
        cout << "Enter a string to find the indices of: ";
        cin >> sFind;
        findIndicesOfSubstring(sSentence, sFind);
        break;

    case 2:
        cout << "Enter a string to find: ";
        cin >> sFind;
        cout << "Enter a string to replace with: ";
        cin >> sReplace;
        replaceWithSubstring(sSentence, sFind, sReplace);
        break;
    
    default:
        break;
    }

    return 0;
}

vector<int> findIndicesOfSubstring(string sSent, string sMatcher) {
    cout << endl;
    cout << "finding " << "'" << sMatcher << "'" << " in " << "'" << sSent << "'";
    vector<int> veciIndexes;
    int iStart = 0; 
    while (iStart < sSent.length() && sSent.find(sMatcher, iStart) != string::npos) { 
        veciIndexes.push_back(sSent.find(sMatcher, iStart));
        iStart = sSent.find(sMatcher, iStart) + 1;
    }
    cout << endl;
        cout << "Found Indexes are as follows: ";
    for (int i = 0; i < veciIndexes.size(); ++i) {
        cout << veciIndexes[i] << ' ';
    }
    return veciIndexes;
}

void replaceWithSubstring(string sSent, string sMatcher, string sReplacer) {
    cout << endl;
    cout << "finding " << "'" << sMatcher << "'" << " in " << "'" << sSent << "' and replacing with: " << sReplacer;
    int filler = 0;
    for (auto indx: findIndicesOfSubstring(sSent, sMatcher)) {
        sSent.replace(indx + filler, sMatcher.length(), sReplacer);
        cout << endl << "Iterations for index " << indx + filler << ": " << sSent;
        filler = filler + sReplacer.length() - sMatcher.length();
    }
    cout << endl << sSent;
}