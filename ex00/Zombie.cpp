#include "Zombie.hpp"

Zombie:: ~Zombie()
{
    std::cout << name << "\n";
}

void Zombie:: announce(void)
{
    std::cout << name << ": BraiiiiiiinnnzzzZ...\n";
}

void Zombie:: setName(std::string newname)
{
    name = newname;
}
std::string Zombie:: getName()
{
    return name;
}
