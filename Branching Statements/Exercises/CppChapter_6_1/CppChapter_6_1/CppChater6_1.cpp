#include<iostream>
#include<cctype>


int main(void)
{
	char ch;
	//int  digit;

	std::cout << "Start to type on your keyboard and stop using @ symbol" << std::endl;

	while ((ch = std::cin.get()) != '@')
	{
		if (isdigit(ch))
			std::cin.get(ch);
		
		else if (isupper(ch)) {

			ch = tolower(ch);
			std::cout << ch;
		}
		else  if (islower(ch)) {

			ch = toupper(ch);
			std::cout << ch;
		}
	 	
		std::cin.get(ch);
	}

	std::cout << std::endl;
	return 0;

}