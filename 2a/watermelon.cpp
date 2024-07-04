#include "../debugging.h"
#include <iostream>

#define dbg(v)                                                                 \
  cout << "Line(" << __LINE__ << ") -> " << #v << " = " << (v) << endl;

int main() {
  using namespace std;
  int input;
  cin >> input;
  if (input <= 2) {
    cout << "NO";
    return 0;
  } else if (input % 2 != 0) {
    cout << "NO";
    return 0;
  }
  cout << "YES";
  return 0;
}
