#include "Zombie.hpp"

Zombie* zombieHorde(int N, std::string name)
{
    int i = 0;
    Zombie *zombies = new Zombie[N];
    while(i < N)
    {
        zombies[i].setName(name);
        i++;
    }
    return zombies;
}

void announceHorde(Zombie *zombies, int N)
{
    int i = 0;
    while(i < N)
    {
        zombies[i].announce();
        i++;
    }
}

int main()
{
    int N = 10;
    Zombie *zombies = zombieHorde(N, "zombie");
    announceHorde(zombies, N);
    delete[] zombies;
    return 0;
}