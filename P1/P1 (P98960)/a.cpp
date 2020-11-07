#include <iostream>

int main()
{
	char c;
	std::cin >> c;
	
	if((int)c > 90)
		c = (char)((int)c - 32);
	else 
		c = (char)((int)c + 32);

	std::cout << c << std::endl;
}
