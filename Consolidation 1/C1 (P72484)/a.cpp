#include <iostream>

using namespace std;

int main ()
{
	int n; cin >> n;

	//Ambas secciones tienen 2n - 1 caracteres/lineas.
	//Separo el rombo, de n a n - 1 verticalmente.
	//Hasta la linea n (la primera es 0), el rombo crece linealmente a razon de 2n + 1
	
	for (int i = 0; i != n; ++i)
	{
		int blocks = 2*i + 1;
		for (int k = 0; k != (n-1-i)+blocks; ++k)
		{
			if (k < ((n-1) - i)) cout << " ";
			else cout << "*";
		}

		cout << endl;
	}

	for (int i = n - 2; i > -1; --i)
	{
		int blocks = 2*i + 1;
		for (int k = 0; k != (n-1-i+blocks); ++k)
		{
			if (k < ((n-1) - i)) cout << " ";
			else cout << "*";
		}	
		cout << endl;
	}	
	


}
