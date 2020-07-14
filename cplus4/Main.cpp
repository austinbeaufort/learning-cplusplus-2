#include <iostream>
#include <string>

using namespace std;

class Player
{
private:
	std::string name;
	int health;
	int xp;
public:
	void set_name(std::string name_val) { name = name_val; }
	std::string get_name() { return name; }
	// we provide default constructor. When we do not provide default constructor,
	// then c++ will generate a default constructor for us.
	Player()
	{
		name = "None";
		health = 100;
		xp = 3;
	}
	// Overloading the constructor
	Player(std::string name_val, int health_val, int xp_val)
	{
		name = name_val;
		health = health_val;
		xp = xp_val;
	}
};

int main()
{
	Player frank;
	// prints "None"
	cout << frank.get_name() << endl;
	frank.set_name("Frank");
	// prints "Frank"
	cout << frank.get_name() << endl;

	Player elsa{ "Elsa", 300, 27 };
	cout << elsa.get_name() << endl;
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
