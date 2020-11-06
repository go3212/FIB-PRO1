#include <iostream>

int main()
{
	int x;
	std::cin >> x;

	if(x >= 10 && x <= 30) 
	{
		std::cout << "it's ok" << std::endl;
		return 0;
	}
	else if(x < 10) std::cout << "it's cold" << std::endl;
	else std::cout << "it's hot" << std::endl;

	if(x <= 0) std::cout << "water would freeze" << std::endl;
	else if(x >= 100) std::cout << "water would boil" << std::endl;
}
