#include "Weapon.hpp"
#include "HumanA.hpp"
#include "HumanB.hpp"

int main()
{
    {
    Weapon club = Weapon("chaos blade");
    HumanA bob("Bob", club);
    bob.attack();
    club.setType("zweihander");
    bob.attack();
    club.setType("highland sword");
    bob.attack();
    }
    {
    Weapon club = Weapon("quelaag's furysword");
    HumanB jim("Jim");
    jim.setWeapon(club);
    jim.attack();
    club.setType("claymore");
    jim.attack();
    }
    return 0;
}