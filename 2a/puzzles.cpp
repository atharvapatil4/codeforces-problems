#include <algorithm>
#include <climits>
#include <cstdlib>
#include <iostream>
#include <vector>

int main() {
  int m, n;
  std::cin >> n >> m;
  std::vector<int> vec(m);
  for (int i = 0; i < m; i++) {
    std::cin >> vec[i];
  }
  std::sort(vec.begin(), vec.end());
  // Check every n sized window
  int curr = 0;
  // [5 7 10 10 12 22] n = 4
  int ans = INT_MAX;
  while (curr < m - n + 1) {
    ans = std::min(ans, std::abs(vec[curr + n - 1] - vec[curr]));
    curr++;
  }
  std::cout << ans;
  /*
   *
   * */
}
