#include <stdio.h>
#include<iostream>
#include<deque>

using namespace std;

int main() {
	//code
	int queries, level;
    int i = 0;
	deque<int> lkns;
	lkns.push_back(1);
	cin >> queries;
    for (int q = 0; q < queries; q++) {
        cin >> level;
        while (--level) {
            deque<int> temp;
            int count = 0;
            int value = 0;
            for (i = 0; i < lkns.size(); i++) {
                if (!value) {
                    value = lkns[i];
                    ++count;
                    if (i == lkns.size() - 1) {
                        temp.push_back(count);
                        temp.push_back(value);
                    }
                } else if (value == lkns[i]) {
                    ++count;
                    if (i == lkns.size() - 1) {
                        temp.push_back(count);
                        temp.push_back(value);
                    }
                } else if (value != lkns[i]) {
                    temp.push_back(count);
                    temp.push_back(value);
                    value = lkns[i];
                    count = 1;
                    if (i == lkns.size() - 1) {
                        temp.push_back(count);
                        temp.push_back(value);
                    }
                }
            }
            i = 0;
            lkns = temp;   
        }
        for (auto x: lkns) {
            cout << x;
        }
        lkns.clear();
	    lkns.push_back(1);
    }
	
	return 0;
}