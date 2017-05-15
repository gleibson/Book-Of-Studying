#include<iostream>
#include<string>

struct car {

    std::string name;
	int year;
	
};


int main()
{
	
	int i = 0;
	int j = 0;

	std::cout << "How many cars do you wish to catalog? ";
	std::cin >> i;
	std::cin.get();
	

	car *question = new car[i];
	
	// for( j ; j < i ; ++j) 
	while( j < i )
	{
		
		std::cout << "Car " << j + 1 << "#" << std::endl;
		std::cout << "Please enter the make: ";
		std::getline(std::cin, question[j].name);
		std::cout << "Please enter the year made: ";
		std::cin >> question[j].year;
		std::cin.get();
		j += 1; //
		std::cout << std::endl;
			
	} 
	
		std::cout << "Here is your collection: " << std::endl;
	    for(j = 0 ; j < i ; ++j)
		{ 
		std::cout << question[j].year << " " << question[j].name;
		std::cout << std::endl;
		}
  
    delete[] question;
	return 0;

}