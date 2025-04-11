#include <iostream>
#include <string>
#include <vector>
using namespace std;

int main() {
  vector<string> lines{
      "######### ###", "#######   ###", "####### #####", "####### #####",
      "##        ###", "## ##########", "## ##########",

  };

  for (string line : lines) {
    cout << line << endl;
  }

  int row = 6;
  int col = 2;

  lines[row][col] = 'H';

  for (string line : lines) {
    cout << line << endl;
  }
  cout << endl;

  while (row > 0) {
    lines[row][col] = ' ';
    if (lines[row - 1][col] == ' ') {
      row--;
    } else if (lines[row][col + 1] == ' ') {
      col++;
    }
    lines[row][col] = 'H';

    for (string line : lines) {
      cout << line << endl;
    }
    cout << endl;
  }

  return 0;
}
