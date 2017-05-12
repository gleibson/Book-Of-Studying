#include<iostream>

const int mounth = 12;
const int years = 3; 

int main()
{


	const char* Mounth[mounth]=
	{
		"January:",
		"February:",
		"March:  ",
		"April:  ",
		"May:    ",
		"June:   ",
		"July:   ",
		"August: ",
		"September:",
		"October:",
		"November:",
		"December:",
	};
	int sales[years][mounth];
	/*{
		{23, 56, 77, 89, 54, 25, 67, 89, 34, 67, 98, 66},
		{22, 45, 56, 65, 77, 87, 73, 71, 12, 99, 55, 53},
	    {42, 34, 67, 78, 88, 96, 23, 90, 79, 45, 23, 45},
	};*/
	
	const int year[years]=
	{
		1,
		2,
		3
	};

	int i;
	int j;
	int sum =0;
	int sum1 =0;
	int sum2 = 0;
	int sum3 = 0;
	
	for (i = 0; i < years; ++i)
	{
		//std::cout << [i]<< "\t";

		for (j = 0; j < mounth; ++j)
		{
			std::cout << "Enter books sales for the mounth of " << Mounth[j] << " in " << year[i] << ": ";
			//std::cout << year[i];
			std::cin >> sales[i][j];
			sum += sales[i][j];
					
		}
	}
	std::cout << "The sum of the total sales during the last thre years: " << sum << std::endl;
		     
	return 0;


}