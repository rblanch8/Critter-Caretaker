#include "Orco.h"


void Orco::SpecialAttack() const
{
	cout << "Special Attack inflicts " <<
		(m_DamageMultiplier * m_Damage);
	cout << " damage points!\n";
}
