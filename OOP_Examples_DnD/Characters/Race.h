#ifndef RACE_H
#define RACE_H

#include "Alignment.h"
#include "Size.h"

struct AgeLifeSpan
{
	unsigned int ageAdult;
	unsigned int ageMiddle;
	unsigned int lifeSpan;
};

class Race
{
public:

private:
	AgeLifeSpan ageLifeSpan;
	unsigned int m_strengthBonus;
	unsigned int m_dexterityBonus;
	unsigned int m_constitutionBonus;
	unsigned int m_intelligenceBonus;
	unsigned int m_wisdomBonus;
	unsigned int m_charismaBonus;
	Alignment m_alignmentTypical;
	Size m_sizeTypical;
};

#endif // RACE_H