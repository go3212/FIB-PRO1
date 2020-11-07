#include <iostream>
#include <cmath>

using namespace std;

int main ()
{
	int filas, columnas; cin >> filas >> columnas;
	for (int i = 0; i < filas; ++i)
	{
		
		for(int k = 0; k < columnas; ++k)
		{
			if (i > k) cout << (i - k)%10;
			else cout << (k - i)%10;
		}
		cout << endl;
	}
}
