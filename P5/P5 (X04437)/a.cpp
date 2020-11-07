#include <iostream>
#include <cmath>

using namespace std;

double dist_or(double x, double y)
{
    //La distancia al origen (0,0) se puede computar haciendo el modulo del vector (x,y)-(0,0) 
    //lo cual es sqrt(x^2 + y^2)

    return sqrt(pow(x, 2) + pow(y, 2));

}


int main() 
{
  double x,y;
  while (cin >> x >> y) cout << dist_or(x,y) << endl;
}
