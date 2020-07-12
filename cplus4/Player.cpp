#include <iostream>
#include <string>


class Player
{
private:
	std::string name;
	int health;
	int xp;
public:
	// Overloaded Constructors
	Player();
	Player(std::string name);
	Player(std::string name, int health, int xp);
};





int main()
{

}