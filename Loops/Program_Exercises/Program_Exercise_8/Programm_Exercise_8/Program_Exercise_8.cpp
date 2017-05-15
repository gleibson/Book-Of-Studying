#include<iostream>
#include<cstring>

const int arsize = 20;

int main()
{
	char word[arsize];
	char done[5] = "done";
	int count = 0;

	std::cout << "Enter words (to stop, type the word done)" << std::endl;
	std::cin >> word;
    //std::getline(std::cin, arsize);
	//std::cin >> word;

	while (strcmp(word, done))
	{
		
		++count;
		std::cin >> word;
	   //std::cin.get();
	}

	std::cout << " You entered a total of " << count << " words ";
	return 0;

}