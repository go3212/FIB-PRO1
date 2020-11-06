#include <iostream>

int main()
{	
	int nums[3];

	std::cin >> nums[0] >> nums[1] >> nums[2];
	
	int max_num = nums[0];

	for(int i = 0; i <= 2; i++) if(max_num < nums[i]) max_num = nums[i];
	
	std::cout << max_num << std::endl;
}
