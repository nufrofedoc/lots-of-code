#include <bits/stdc++.h>

using namespace std;

int sumHourGlass(int i, int j, vector<vector<int>> arr);

int main() {
  int sum = 0;
  int res = -100;
  vector<vector<int>> arr(6);

  cout << "Enter your input" << endl;
  for (int i = 0; i < 6; ++i) {
    arr[i].resize(6);

    for (int j = 0; j < 6; ++j) {
      cin >> arr[i][j];
    }
  }

  for (int i = 0; i < 6; ++i) {
    for (int j = 0; j < 6; ++j) {
      if (i <= 3 && j <= 3) {
        sum = sumHourGlass(i, j, arr);
        
        if (res < sum) {
          res = sum;
        }
        cout << sum;
        sum = 0;
      }
    }
  }

  cout << res;

  return 0;
}

int sumHourGlass(int i, int j, vector<vector<int>> arr) {
  int sum = 0;
  
  sum += arr[i][j];
  sum += arr[i][j+1];
  sum += arr[i][j+2];
  sum += arr[i+1][j+1];
  sum += arr[i+2][j];
  sum += arr[i+2][j+1];
  sum += arr[i+2][j+2];
  
  return sum;
}
