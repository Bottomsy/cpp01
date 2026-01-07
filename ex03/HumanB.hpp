#ifndef HUMAN_B_HPP
#define HUMAN_B_HPP

#include "Weapon.hpp"

class HumanB
{
    private :
    Weapon weapon;
    std::string name;

    public :
    HumanB(std::string newname);
    void setWeapon(Weapon &new_weapon);
    void attack();
};

#endif