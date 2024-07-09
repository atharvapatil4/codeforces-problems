#include <iostream>

int main() {
  std::string in;
  std::cin >> in;
  std::string target = "hello";
  int curr = 0;
  for (auto c : in) {
    if (c == target[curr]) {
      curr += 1;
    }
    if (curr == 5) {
      std::cout << "YES";
      return 0;
    }
  }
  std::cout << "NO";
}
