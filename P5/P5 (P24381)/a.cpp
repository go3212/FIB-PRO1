#include <iostream>
using namespace std;


void cross(int number, char character)
{

  // La altura de la cruz es equivalente a la distancia de los bordes sin incluir el caracter
  int height = number / 2; 
  for (int i = 1; i <= number; ++i)
  {
    if (i == (number / 2) + 1) for (int k = 1; k <= number; ++k) cout << character;
    else 
    {
      for (int k = 1; k <= (number / 2); ++k) cout << " ";
      cout << character;  
    }
    cout << endl;
  }
}


int main() {
  int n;
  char c;
  while (cin >> n >> c) cross(n, c);
}
