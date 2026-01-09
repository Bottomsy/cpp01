#include "HumanA.hpp"

HumanA::HumanA(std::string newname, Weapon &new_weapon) : name(newname), weapon(new_weapon)
{
    name = newname;
}

void HumanA::attack()
{
    std::cout << name << " attacks with their " << weapon.getType() << "\n";
}