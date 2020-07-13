#include <iostream>
#include <string>

using namespace std;

class Player
{
private:
	string name;
	int health;
	int xp;
public:
	void set_name(string name_val) { name = name_val; }
	// Overloaded Constructors
	Player()
	{
		cout << "No args constructor called" << endl;
	}
	Player(string name)
	{
		cout << "String arg constructor called" << endl;
	}
	Player(string name, int health, int xp)
	{
		cout << "Three args constructor called" << endl;
	}
	~Player()
	{
		cout << "Destructor called for " << name << endl;
	}
};


int main()
{
	Player elsa;
	elsa.set_name("Elsa");

	Player frank;
	frank.set_name("Frank");
	Player andrea("Andrea");
	andrea.set_name("Andrea");
	Player hero("Hero", 100, 12);
	hero.set_name("Hero");
	
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
