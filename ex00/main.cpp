#include "Zombie.hpp"

Zombie* newZombie(std::string name)
{
    Zombie *zombie = new Zombie;
    zombie->setName(name);
    zombie->announce();
    return zombie;
}
void randomChump(std::string name)
{
    Zombie zombie;
    zombie.setName(name);
    zombie.announce();
}

int main()
{
    Zombie *zombie = newZombie("heap zombie");
    randomChump("stack zombie");
    delete zombie;
    return 0;
}