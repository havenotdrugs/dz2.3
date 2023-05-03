#include <iostream>
using namespace std;

int main() {
  float min, max, number;
  cin >> min >> max >> number;
  if (number >= min && number <= max) cout << "YES" << endl;
  else cout << "NO" << endl;
}
