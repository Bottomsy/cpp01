#ifndef HUMAN_A_HPP
#define HUMAN_A_HPP

#include "Weapon.hpp"

class HumanA
{
    private :
    Weapon &weapon;
    std::string name;

    public :
    HumanA(std::string newname, Weapon &new_weapon);
    void attack();
};

#endif