#include <iostream>
using namespace std;

int add(int a, int b) {
  return a + b;
}

int main() {
  int a, b;
  cout << "Enter two numbers: ";
  cin >> a >> b;
  cout << "Sum of " << a << " and " << b << " is " << add(a, b) << endl; 
  return 0;
}