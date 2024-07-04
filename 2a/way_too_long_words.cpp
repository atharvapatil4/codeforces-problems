#include <iostream>
#include <string>
#include <vector>

int main() {
  using namespace std;
  ios::sync_with_stdio(false);
  cin.tie(nullptr);
  int n;
  cin >> n;
  vector<string> words(n);
  for (int i = 0; i < n; ++i) {
    string curr;
    cin >> curr;
    words[i] = curr;
    if (curr.length() > 10) {
      char first = curr.front();
      char last = curr.back();
      string middle = to_string(curr.length() - 2);
      string s = first + middle + last;
      words[i] = s;
    }
    cout << words[i] << endl;
  }
  return 0;
}
