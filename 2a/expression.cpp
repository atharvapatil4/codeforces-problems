#include <iostream>

int main() {
  int a, b, c;
  std::cin >> a >> b >> c;
  // a * b * c, a + b + c, ab + c, a + bc
  int ans = a + b + c;
  ans = std::max(ans, a * b + c);
  ans = std::max(ans, a * (b + c));
  ans = std::max(ans, a + b * c);
  ans = std::max(ans, (a + b) * c);
  ans = std::max(ans, a * b * c);
  std::cout << ans;
}
