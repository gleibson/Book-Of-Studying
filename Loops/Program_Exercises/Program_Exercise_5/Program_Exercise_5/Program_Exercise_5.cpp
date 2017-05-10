#include<iostream>

const int Mounth = 12;
const int data = 12;

int main()
{
	const char * mounth[Mounth] =
	{
		"January",
		"February",
		"March",
		"April",
		"May",
		"June",
		"July",
		"August",
		"September",
		"October",
		"November",
		"December"
	};

	int sales[data];
	int i = 0;
	int sum = 0;

	
	while ( i < 12 )
	{
		std::cout << "Enter of the month: " << mounth[i] << " " ;
		std::cin >> sales[i];
		sum += sales[i];
		i++;
	}
		std::cout << "Total of year: " << sum << std::endl;
	
	return 0;

}