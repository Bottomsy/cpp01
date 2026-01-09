#include "HumanB.hpp"

HumanB::HumanB(std::string newname)
{
    name = newname;
}

void HumanB::setWeapon(Weapon &new_weapon)
{
    weapon = &new_weapon;
}
void HumanB::attack()
{
    std::cout << name << " attacks with their " << (*weapon).getType()<< "\n";
}