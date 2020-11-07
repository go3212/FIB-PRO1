#include <iostream>
#include <cmath>

int main()
{	
	double x;
	std::cin >> x;

	std::cout << (int)x << " " << (int)std::ceil(x) << " " << (int)(x + (float)0.5) << std::endl;

}
