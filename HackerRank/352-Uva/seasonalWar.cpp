#include <bits/stdc++.h>
#include <limits>
#include<windows.h>
 
using namespace std;
void find_eagle(int i, int j, vector<vector<int>> &image, int size);
void print_image(vector<vector<int>> image, string str);

int main(){
  int images, size, temp, eagle = 0, t = 0;
  string stemp;
  vector<int> imTemp;
  cin >> images;
  while (images--) {
    vector<vector<int>> image;
    cin >> size;
    for (int i = 0; i < size; i++) {
      cin >> stemp;
      for (char c: stemp) {
        imTemp.push_back((int)(c - '0'));
      }
      image.push_back(imTemp);
      imTemp.clear();
    }
    print_image(image, "ORIGINAL");
    for (int i = 0; i < size; i++) {
      for (int j = 0; j < size; j++) {
        if (image[i][j] == 1) {
          find_eagle(i, j, image, size);
          eagle++;
        }
      }
    }
    // cout << "Image number " << ++t << " contains " << eagle << " war eagles.\n";
    eagle = 0;
    imTemp.clear();
  }

  return 0;
}

void find_eagle(int i, int j, vector<vector<int>> &image, int size) {
  image[i][j] = 5;
  system("clear");
  print_image(image, "MANIPLATION");
  if (((i + 1) < size) && image[i+1][j] == 1) {
    find_eagle(i+1, j, image, size);
  }

  if (((j + 1) < size) && image[i][j+1] == 1) {
    find_eagle(i, j+1, image, size);
  }

  if (((j - 1) >= 0) && image[i][j-1] == 1) {
    find_eagle(i, j-1, image, size);
  }

  if (((j + 1) < size) && ((i + 1) < size) && image[i+1][j+1] == 1) {
    find_eagle(i+1, j+1, image, size);
  }

  if (((i + 1) < size) && ((j - 1) >= 0) && image[i+1][j-1] == 1) {
    find_eagle(i+1, j-1, image, size);
  }

  if (((i - 1) >= 0) && image[i-1][j] == 1) {
    find_eagle(i-1, j, image, size);
  }

  if (((j + 1) < size) && ((i - 1) >= 0) && image[i-1][j+1] == 1) {
    find_eagle(i-1, j+1, image, size);
  }

  if (((i - 1) >= 0) && ((j - 1) >= 0) && image[i-1][j-1] == 1) {
    find_eagle(i-1, j-1, image, size);
  }


}


void print_image(vector<vector<int>> image, string str) {
  cout << "\n==============="<< str <<"=================\n";
  for (auto list: image) {
    for (auto pix: list) {
      cout << pix;
    }
    cout << "\n";
  }
  cout << "\n================================\n";
}