#pragma once
#include <string>

class Account {
private:
	std::string name;
	double balance;
public:
	// Overloaded Constructors

	// methods declared inside the class
	void set_balance(double bal) { balance = bal; }
	double get_balance() { return balance; }

	// methods to be declared outside the class declaration
	void set_name(std::string n);
	std::string get_name();

	bool deposit(double amount);
	bool withdraw(double amount);
};


