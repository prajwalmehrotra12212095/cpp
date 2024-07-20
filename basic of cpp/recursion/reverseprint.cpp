#include <iostream>

using namespace std;

void reversePrint(int num) {
  if (num == 1) {
    cout << 1 << endl;
    return;
  }
  cout << num << endl;
  reversePrint(num - 1);
}

int main() {
  int n;
  cin >> n;

  reversePrint(n);

  return 0;
}
