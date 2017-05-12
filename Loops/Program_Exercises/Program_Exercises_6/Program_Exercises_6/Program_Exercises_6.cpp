#include <iostream>


const int mounth = 12;
const int years = 3;


int main()
{

	const char* Mounth[mounth] =
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

	int sales[years][mounth]=
	{
		{68, 25, 45, 35, 67, 66, 44, 43, 21, 45, 77, 99},
		{45, 67, 87, 55, 90, 38, 47, 86, 86, 78, 54, 89},
		{12, 34 ,45, 56, 67, 42, 56, 65, 58, 68 ,78 ,79}

	};

	std::cout << "The sales of the book during 3 years "; 


}