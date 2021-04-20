#include <bits/stdc++.h>
 
using namespace std;
void findPath(int x, int y, vector<vector<char>> &path);
bool correctStone(char stone);
 
string cPath = "IEHOVA#";
int xm, ym;
 
int main(){
  int temp, cases, xs, ys;
  string str;
  vector<char> tPath;
  vector<vector<char>> path;
  cin >> cases;
  while (cases--) {
    cin >> xm >> ym;
    for (int i = 0; i < xm; i++) {
      cin >> str;
      for (int j = 0; j < ym; j++) {
        tPath.push_back(str[j]);
        if (str[j] == '@') {
          xs = i;
          ys = j;
        }
      }
      path.push_back(tPath);
      tPath.clear();
    }
    // for (int i = 0; i < xm; i++) {
    //   for (int j = 0; j < ym; j++) {
    //     cout << path[i][j];
    //   }
    //   cout << "\n";
    // }
    findPath(xs, ys, path);
    path.clear();
    cout << "\n";
  }
  
  return 0;
}

bool correctStone(char stone) {
  for (char c: cPath) {
    if (c == stone) {
      return true;
    }
  }
  return false;
}

void findPath (int x, int y, vector<vector<char>> &path) {
  if (path[x][y] != '#') {
    if ((y+1 <= ym) && correctStone(path[x][y+1])) {
      cout << "right";
      if (path[x][y+1] != '#') {cout << " "; }
      path[x][y+1] = 'a';
      findPath(x, y+1, path);
    }
    if ((y-1 >= 0) && correctStone(path[x][y-1])) {
      cout << "left";
      if (path[x][y-1] != '#') {cout << " "; }
      path[x][y-1] = 'a';
      findPath(x, y-1, path);
    }
    if ((x-1 >= 0) && correctStone(path[x-1][y])) {
      cout << "forth";
      if (path[x-1][y] != '#') {cout << " "; }
      path[x-1][y] = 'a';
      findPath(x-1, y, path);
    }
  }
}
