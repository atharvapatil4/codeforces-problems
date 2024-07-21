#include <iostream>
#include <vector>
#define ll long long

int main() {
  ll n, k;
  std::vector<int> vec;
  std::cin >> n >> k;
  ll num_odds = (n + 1) / 2;

  if (k <= num_odds) {
    std::cout << 2 * k - 1;
  } else {
    std::cout << 2 * (k - num_odds);
  }
}
