/*
TGFSLOL
This Game Fucking Sucks LOL
Notes ---->
Remember to add more classes (Militant, Commander)
Upgrades are important but i'm not sure how i'm going to 
---------->


Stats----->
    
Guard=====|
Max HP for Guard: 30
Max ATK for Guard: 40

Min HP for Guard: 
==========|



---------->
*/

#include <iostream>
#include <algorithm>
#include <random>

std::string names[10] = { "Levelius", "Avelius", "Guvvar", "Vladimir", "Elen", "Graphil", "Inerti", "Zarr", "Nivval", "Geometro" };

void initialize() {
	/* Put some player shit in here or something */
}

class Player {
public:
	int Attack;
	int Level;
	int Health;
	int XP;
};

class Guard {
public:
	std::string Name = "Guard";
	int Level;
	int Attack;
	int Health;
};

Guard enemy() {
	std::string internalname = names[std::rand() % 10];
	Guard guardman;
	guardman.Name = internalname;
	guardman.Level = (std::rand() % 20) + 10;
	guardman.Attack = guardman.Level * 1.5;
	guardman.Health = guardman.Level * 2;
	return guardman;
}

void fight(const Guard& guard) {
	/* Give the info text */
	std::cout << "Fight has initiated against " << guard.Name << "." << std::endl;
	std::cout << guard.Name << " has " << guard.Health << " health and " << guard.Attack << " attack power." << std::endl;
}

int main() {

	/* Seed the random number generator... so it's.. random lol */
	std::srand(time(NULL));

	/* Make an Enemy and fight it through returning a Guard type from enemy() (which makes a semi-random Guard type) into fight().
	Wow. That's quite a bit of documentation. Why the fuck do i write this even though i'm going to dump it into a shitty folder with some more unused projects.
	If you're reading this code, get the fuck out because this stuff is the most wrangly inefficient shit code ever. This got long, didn't it. */
	fight(enemy());
}