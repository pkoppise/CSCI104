#include <iostream>
using namespace std;

int f3() { return 1; }
const int f4() { return 2; }
/*
int main() {
  const int j = f3(); // Works fine
  cout << j << endl;
  int k = f4(); // But this works fine too!
  k = 10;
  cout << k << endl;
}*/

class X {
  int i;
public:
  X(int ii = 0);
  void modify();
};

X::X(int ii) { i = ii; }

void X::modify() { i++; }

X f5() {
  return X();
}

const X f6() {
  return X();
}

void f7(X& x) { // Pass by non-const reference
  x.modify();
}

int main() {
  f5() = X(1); // OK -- non-const return value
  f5().modify(); // OK
//!  f7(f5()); // Causes warning or error
// Causes compile-time errors:
//!  f7(f5());
//!  f6() = X(1);
//!  f6().modify();
//!  f7(f6());
}
