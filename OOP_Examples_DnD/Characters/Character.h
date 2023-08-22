#ifndef CHARACTER_H
#define CHARACTER_H

#include "Movement.h"
#include <vector>

class Character
{
public:
	Character();
	~Character();

private:
	unsigned int m_hp;
	unsigned int m_xp;
	unsigned int m_level;
	unsigned int m_strength;
	unsigned int m_dexterity;
	unsigned int m_constitution;
	unsigned int m_intelligence;
	unsigned int m_wisdom;
	unsigned int m_charisma;
	unsigned int m_armorClass;
	unsigned int m_initiative;
	std::vector<Movement> m_movement;
	unsigned int m_age;
};

#endif // !CHARACTER_H
