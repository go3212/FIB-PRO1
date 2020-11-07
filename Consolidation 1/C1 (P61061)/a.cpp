#include <iostream>
using namespace std;

int main() {

	int num;

	while (cin >> num) {
		if (num < 10) cout << "The product of the digits of " << num << " is " << num << '.' << endl;
		else {
			while (num >= 10) {
				int r = 1, x = num;
				while (x > 0) {
					r *= x % 10;
					x /= 10;
				}

				cout << "The product of the digits of " << num << " is " << r << '.' << endl;
				num = x = r;
			}
		}

		cout << "----------" << endl;
	}


}


