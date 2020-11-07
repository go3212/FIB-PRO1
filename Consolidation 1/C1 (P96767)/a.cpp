#include <iostream>
#include <cmath>

using namespace std;

int main ()
{
	cout.setf(ios::fixed);
	cout.precision(4);

	double n;
	cin >> n;

	double polynomial = 0;


	int i = 0;
	double c;
	while (cin >> c)
	{
		polynomial += c*pow(n, i);
		++i;
	}
	cout << polynomial << endl;
}
