#include "find_lists.h"

using namespace std;

int find_element(vector<int> list, int el) {
  auto iter = find(list.begin(), list.end(), el);
  return iter - list.begin();
}
