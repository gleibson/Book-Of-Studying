#include<iostream>

int main()
{

	int j;
	for (j = 0; j < 11; j += 3)
	{
		std::cout << j;
		std::cout << std::endl << j << std::endl;
	}
	
	/*
		std::cout << j;
		std::cout << std::endl << j << std::endl
		whitout braces
	*/
	return 0;


}