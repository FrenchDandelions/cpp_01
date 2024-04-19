#include "Zombie.hpp"

Zombie* zombieHorde(int N, std::string name)
{
    Zombie *Undead;
    if(N < 0)
    {
        std::cout << "Number of zombies for the horde is inferior to 0, the number of zombies is set to 1" << std::endl;
        N = 1;
    }
    Undead = new (std::nothrow) Zombie[N];
    if(Undead)
    {
        for(int i = 0; i < N; i++)
            Undead[i].setName(name);
    }
    return (Undead);
}