#include<iostream>

int main()
{
	int first, second, i, sum;

	std::cout << "Insert the first value: ";
	std::cin >> first;

	std::cout << "Insert the second value: ";
	std::cin >> second;

	sum = 0;
	for (i = first; i <= second; ++i)
	{ 
		std::cout << i << std::endl;
		sum += i;
	}
	std::cout << sum << std::endl;
	return 0;
}