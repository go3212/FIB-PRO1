#include <iostream>
#include <cmath>

using namespace std;

int main ()
{
	int number;
	cin >> number;

	int number_bk = number;

	int digits = 0;
	while (number_bk != 0)
	{
		number_bk /= 10;
		++digits;
	}
	
	if (digits % 2 == 0 and digits != 0) 
	{
		int n1 = 0, n2 = 0;
		for (int i = int(digits/2) - 1; i >= 0; --i)
		{
			n1 += int(number / int(pow(10,int(i+(digits/2))))%10);
			n2 += int(number / int(pow(10,i))%10);
		}

		if (n1 > n2) cout << n1 << " > " << n2 << endl;
		else if (n1 < n2) cout << n1 << " < " << n2 << endl;
		else cout << n1 << " = " << n2 << endl;
	} else cout << "nothing" << endl;
	
}
