#include <iostream>


int main()
{
	double original_balance = 100, current_balance, interest_cleo, interest_daphne;
    int years = 0;
	
	for (current_balance = 100 ; current_balance <= original_balance; current_balance++)
	{
		
	    interest_cleo = 0.05*current_balance;
		current_balance += interest_cleo;
	    interest_daphne = 0.10*100;
		original_balance += interest_daphne;
		years++;
	}

	std::cout << current_balance << "$ Value of Cleo " << std::endl;
	std::cout << original_balance << "$ Value of Daphne " << std::endl;
	std::cout << "Take "<< years << " years, of the investiment to Cleo exceed Daphen in compound interest." << std::endl;
	   
	return 0;
}