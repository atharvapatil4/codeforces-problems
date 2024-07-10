#include <iostream>

int main() {
  int m, n;
  std::cin >> n >> m;
  int moves = std::min(m, n);

  if (moves % 2 == 0) {
    // even number of moves, akshat loses
    std::cout << "Malvika";
  } else {
    std::cout << "Akshat";
  }
  return 0;
}
