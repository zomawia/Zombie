#pragma once

class Zombie
{
private:
	char name[64];
	char prior[64];

	int health, attack, critRate, kills;
	//bool isAlive;

public:
	void init(const char a_name[], const char a_occ[]);

	int rollAttack() const;

	void takeDamage(int dmg);

	void draw(bool brief) const;

	bool isAlive() const;

};
