#include <iostream>

using namespace std;

int main ()
{
	int x, n, n0 = 0, c = 0;
	bool first = true;
	cin >> x;

	while (cin >> n) 
	{
		if (n != 0) 
		{
			if (not first and n > n0) c++;
			n0 = n, first = false;
		} 
		else 
		{
			cout << c << endl;
			c = 0, first = true;
		}
	}

	/*
	int n; cin >> n;
	for  (int i = n; i != 0; --i)
	{
		int previous; cin >> previous;
		
		int count = 0;
		int input;
		while (cin >> input and input != 0)
		{
			if ((input > previous) and input != 0) count += 1;
			previous = input;
		}
		
		cout << count << endl;
	}
	*/
}
