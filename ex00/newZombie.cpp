#include "Zombie.hpp"

Zombie* newZombie(std::string name){
    Zombie *Undead;
    Undead = new (std::nothrow) Zombie(name);
    if(Undead)
        Undead->announce();
    return (Undead);
}