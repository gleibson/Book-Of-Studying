#include <iostream>


int main()
{
	double original_balance, current_balance, interest_cleo, interest_daphne;
    int years = 0;

	original_balance = 100;
	
	
	
	for (current_balance = 100 ; current_balance <= original_balance; current_balance++)
	{
		
	    interest_cleo = 0.05*current_balance;
		current_balance += interest_cleo;
	    interest_daphne = 0.10*100;
		original_balance += interest_daphne;
		years++;
	}

	std::cout << interest_cleo << " interest of Cleo " << interest_daphne << " interest of Daphne " << years << "years" << std::endl;
	   
		return 0;
}