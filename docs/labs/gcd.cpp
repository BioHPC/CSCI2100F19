#include <iostream>
using namespace std;
// function of GCD

long gcd(long u, long v) {
  /* We will use Euclid's algorithm
     for computing the GCD */
  long r;
  while (v != 0) {
    r = u % v;   // compute remainder
    u = v;
    v = r;
  }
  return u;
}

int main() {
  long a, b;
  cout << "First value: ";
  cin >> a;
  cout << "Second value: ";
  cin >> b;
  cout << "a=" << a << ", b=" << b << endl;
  cout << "gcd: " << gcd(a,b) << endl;
  return 0;
}

