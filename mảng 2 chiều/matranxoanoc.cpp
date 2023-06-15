#include <iostream>
#include <vector>

using namespace std;

void spiralMatrix(int n) {
  vector<vector<int>> matrix(n, vector<int>(n));
  int val = 1;
  for (int i = 0; i < (n + 1) / 2; i++) {
    // top row
    for (int j = i; j < n - i; j++) {
      matrix[i][j] = val++;
    }
    // right column
    for (int j = i + 1; j < n - i; j++) {
      matrix[j][n - i - 1] = val++;
    }
    // bottom row
    for (int j = n - i - 2; j >= i; j--) {
      matrix[n - i - 1][j] = val++;
    }
    // left column
    for (int j = n - i - 2; j > i; j--) {
      matrix[j][i] = val++;
    }
  }
  // print the matrix
  for (int i = 0; i < n; i++) {
    for (int j = 0; j < n; j++) {
      cout << matrix[i][j] << " ";
    }
    cout << endl;
  }
}

int main() {
  spiralMatrix(3);
  cout << endl;
  spiralMatrix(4);
  return 0;
}
