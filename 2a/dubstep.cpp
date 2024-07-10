#include <iostream>
#include <string>

int main() {
  std::string input, ans;
  std::cin >> input;

  int curr = 0, end = input.length();
  while (curr < end) {
    if ((curr < end - 2) && input[curr] == 'W' && input[curr + 1] == 'U' &&
        input[curr + 2] == 'B') {
      // found a wub
      curr += 3;
    } else {
      // extract until wub
      int start = curr;
      while ((curr < end) &&
             !(curr < end - 2 && input[curr] == 'W' && input[curr + 1] == 'U' &&
               input[curr + 2] == 'B')) {
        curr += 1;
      }

      ans += input.substr(start, curr - start) + " ";
    }
  }
  std::cout << ans.substr(0, ans.length() - 1);
}
