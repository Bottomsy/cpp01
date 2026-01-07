#include "HumanA.hpp"

HumanA::HumanA(std::string newname, Weapon new_weapon)
{
    name = newname;
    weapon = new_weapon;
}
void HumanA::setWeapon(Weapon &new_weapon)
{
    weapon = new_weapon;
}

void HumanA::attack()
{
    std::cout << name << " attacks with their " << weapon.getType() << "\n";
}