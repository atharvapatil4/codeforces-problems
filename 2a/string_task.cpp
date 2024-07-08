#include <cctype>
#include <iostream>
#include <set>
#include <string>

int main() {

  using namespace std;
  string input;
  cin >> input;
  int n = input.length();
  string ans = string();
  set<char> vowels = {'a', 'e', 'i', 'o', 'u', 'y'};
  for (int i = 0; i < n; i++) {
    char curr = input[i];
    if (vowels.count(tolower(curr)) > 0) {
      continue;
    }
    ans += ".";
    ans += tolower(curr);
  }
  cout << ans;
  return 0;
}
