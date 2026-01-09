#include "Weapon.hpp"

Weapon::Weapon()
{
    type = "No Weapon assigned";
}
Weapon::Weapon(std::string newtype)
{
    type = newtype;
}

const std::string &Weapon::getType() const
{
    return type;
}

void Weapon::setType(std::string newtype)
{
    type = newtype;
}