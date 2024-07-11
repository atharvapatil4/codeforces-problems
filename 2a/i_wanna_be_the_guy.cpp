#include <iostream>
#include <vector>

int main() {
  int n, p, q;
  std::cin >> n >> p;
  std::vector<int> x_levels(p);
  std::vector<int> checklist(n, 0);
  int curr;
  for (int i = 0; i < p; i++) {
    std::cin >> curr;
    checklist[curr - 1] = 1;
  }
  std::cin >> q;
  std::vector<int> y_levels(q);
  for (int i = 0; i < q; i++) {
    std::cin >> curr;
    checklist[curr - 1] = 1;
  }

  // check
  for (auto elem : checklist) {
    if (elem == 0) {
      std::cout << "Oh, my keyboard!";
      return 0;
    }
  }
  std::cout << "I become the guy.";
  return 0;
}
