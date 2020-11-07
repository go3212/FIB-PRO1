#include <iostream>

using namespace std;

int main ()
{
	cout.setf(ios::fixed);
	cout.precision(4);
	
	int n; cin >> n; 
	for (int k = n; k != 0; --k)
	{
		int iteraciones; cin >> iteraciones;
		double minimo = 0, media = 0, maximo = 0;
		cin >> media; 
		maximo = media;
		minimo = media;

		for (int i = iteraciones - 1; i != 0; --i)
		{
			double input;
			cin >> input;

			media += input;
			if (input > maximo) maximo = input;
			if (input < minimo) minimo = input;
		}

		cout << minimo << " " << maximo << " " << (media/double(iteraciones)) << endl;
	}
}
