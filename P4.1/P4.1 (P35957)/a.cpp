#include <iostream>
#include <cmath>

using namespace std;

int get_lenght (int a)
{
	int l = 0;
	if (a == 0) l = 1;
	else
	{
		while (a != 0)
		{
			a /= 10;
			++l;	
		}
	}
	return l;
}

int main ()
{
	int n; cin >> n;

	// A B A B A B
	// 1 2 3 4 5 6

	int previo; 
	bool first = true;
	bool in_match = true;
	
	for (int i = 1; i <= 2*n and in_match; ++i)
	{
	
		int numero; cin >> numero;
		int lenght = get_lenght(numero);

		numero = int(numero/pow(10,int(lenght/2)))%10;

		if ((((previo != numero) && !first) || lenght % 2 == 0 ))
		{
			if ( i % 2 != 0) cout << "B" << endl;
			else cout << "A" << endl;
			in_match = false;
		}
		
		first = false;
		previo = numero;
	}
	
	if (in_match) cout << "=" << endl;
}
