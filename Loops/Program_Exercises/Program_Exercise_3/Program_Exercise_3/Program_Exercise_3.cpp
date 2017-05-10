#include<iostream>

int main()
{

	int numbers;
	int sum = 0;

	std::cout << "Enter the numbers enter 0 to quit:  ";
	std::cin >> numbers;
	while (numbers != 0)
	{
		sum += numbers;
        std::cout << "the sum of the numbers is " << sum << std::endl;
		std::cout << std::endl <<  "Enter the numbers enter 0 to quit:  ";
		std::cin >> numbers;
	}
	return 0;
	
}