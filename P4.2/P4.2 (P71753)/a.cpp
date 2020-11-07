#include <iostream>

using namespace std;

int main ()
{
	int iterations;
	while (cin >> iterations)
	{
		
		int max; cin >> max;

		for (int i = iterations - 1; i != 0; --i)
		{
			int input; cin >> input;
			if (input > max) max = input;	
		}	
		cout << max << endl;
	}

}
