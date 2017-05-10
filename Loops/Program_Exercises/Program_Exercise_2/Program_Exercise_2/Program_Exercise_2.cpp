#include<iostream>
#include<array>

const int Arsize = 16;

int main()
{
	std::array<long double, Arsize>factorials;
	
	factorials[1] = factorials[0] = 1.0;

	for (int i = 2; i < Arsize; i++)
		factorials[i] = i* factorials[i - 1];

	for (int i = 0; i < Arsize; i++)

		std::cout << i << "! = " << factorials[i] << std::endl;

	return 0;
}