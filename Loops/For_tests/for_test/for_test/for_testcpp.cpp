#include<iostream>

int main()
{
	int limit;

	std::cout << "Enter the starting countdown value: ";
	std::cin >> limit;

	int i;
	for (i = limit; i; i--)
		std::cout << "i = " << i << std::endl;
	    std::cout << "Done now that i = " << i << std::endl;

		return 0;


}