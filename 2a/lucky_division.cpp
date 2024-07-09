#include <iostream>
#include <vector>

bool isLucky(int n) {
  while (n) {
    int last = n % 10;
    if (last != 4 && last != 7) {
      return false;
    }
    n = n / 10;
  }
  return true;
}

std::vector<int> generateLuckyNumbers(int limit) {
  std::vector<int> ans;
  for (int i = 1; i < limit; i++) {
    if (isLucky(i)) {
      ans.push_back(i);
    }
  }
  return ans;
}

bool isAlmostLucky(int n) {
  std::vector<int> luckyNumbers = generateLuckyNumbers(1000);
  for (auto i : luckyNumbers) {
    if (n % i == 0) {
      return true;
    }
  }
  return false;
}

int main() {
  int in;
  std::cin >> in;
  if (isAlmostLucky(in)) {
    std::cout << "YES";
  } else {
    std::cout << "NO";
  }
}
