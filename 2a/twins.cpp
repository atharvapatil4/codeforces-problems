#include <algorithm>
#include <functional>
#include <iostream>
#include <vector>

int main() {
  using namespace std;
  vector<int> vec;
  int n, num, total, curr;
  curr = 0;
  total = 0;
  cin >> n;
  while (cin >> num) {
    total += num;
    vec.push_back(num);
  }
  // sort
  sort(vec.begin(), vec.end(), greater<int>());
  for (int i = 0; i < n; i++) {
    if (curr > total) {
      cout << i;
      return 0;
    }
    curr += vec[i];
    total -= vec[i];
  }
  cout << n;
  return 0;
}
