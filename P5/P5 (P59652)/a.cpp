#include <iostream>
using namespace std;

void gcd (int& num1, int& num2)
{
  int great_common_divisor = num1;
  while (num2 != 0)
  {
    int temp = num2;
    num2 = num1%num2;
    num1 = temp;
  }
}

void read_rational(int& num, int& den)
{

}


int main() {
  int t;
  cin >> t;
  while (t--) {
    int num, den;
    read_rational(num, den);
    cout << num << ' ' << den << endl;
  }
}
