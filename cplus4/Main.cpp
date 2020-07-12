#include <iostream>
#include <string>
#include "Account.h"

using namespace std;


int main()
{
	Account frank_account;
	frank_account.set_name("Frank's account");
	frank_account.set_balance(1000);

	if (frank_account.deposit(200))
		cout << "Deposit OK" << endl;
	else
		cout << "Deposit Not Allowed" << endl;

	if (frank_account.withdraw(500))
		cout << "Withdrawal OK" << endl;
	else
		cout << "Not sufficient funds" << endl;

	if (frank_account.withdraw(1500))
		cout << "Withdrawal OK" << endl;
	else
		cout << "Not sufficient funds" << endl;
}



// Run program: Ctrl + F5 or Debug > Start Without Debugging menu
// Debug program: F5 or Debug > Start Debugging menu

// Tips for Getting Started: 
//   1. Use the Solution Explorer window to add/manage files
//   2. Use the Team Explorer window to connect to source control
//   3. Use the Output window to see build output and other messages
//   4. Use the Error List window to view errors
//   5. Go to Project > Add New Item to create new code files, or Project > Add Existing Item to add existing code files to the project
//   6. In the future, to open this project again, go to File > Open > Project and select the .sln file
