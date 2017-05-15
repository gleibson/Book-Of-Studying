#include<iostream>
#include<string>

int main()
{
	std::string word;
	std::string done = "done";
	int count = 0;

	std::cout << "Enter words (to stop, type the word done)" << std::endl;
	std::cin >> word;
	//std::getline(std::cin, arsize);
	//std::cin >> word;

	while (word != done)
	{

		++count;
		std::cin >> word;
		//std::cin.get();
	}

	std::cout << " You entered a total of " << count << " words " << std::endl;
	return 0;

}