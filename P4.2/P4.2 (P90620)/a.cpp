#include <iostream>

using namespace std;

int main ()
{
	int previous;
	cin >> previous;

	bool peak_found = false;
	bool possible_peak = false;

	int input;
	while(!peak_found and cin >> input and input != 0)
	{
		if (previous < input and input > 3143 and !possible_peak) possible_peak = true;
		else if (possible_peak and input < previous) peak_found = true;
		else possible_peak = false;

		previous = input;
	}

	if(peak_found) cout << "YES" << endl;
	else cout << "NO" << endl;
}
