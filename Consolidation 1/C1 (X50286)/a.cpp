#include <iostream>
#include <string>

using namespace std;

int main ()
{
	int count = 0;

	string word;
	while (cin >> word)
	{
		if (word == "hello") ++count;
	}
	
	cout << count << endl;
}
