#include "find_lists.h"
#include <algorithm>
using namespace std;

int find_element(vector<int> list, int el) {
  auto iter = find(list.begin(), list.end(), el);
  return iter - list.begin();
}

int find_element(vector<string> names, string name) {
  auto iter = find(names.begin(), names.end(), name);
  return iter - names.begin();
}

int lookup_fee(string name, vector<string> names, vector<int> fees){
if (names.size() != fees.size()) {
  return -1;
}

  int pos = find_element(names, name);

  if (pos == names.size()) {
    return -1;
  }

  return fees[pos];
}
