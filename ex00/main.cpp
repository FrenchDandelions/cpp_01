#include "Zombie.hpp"

int main(void)
{
    Zombie Undead("Birdie");
    randomChump("Random");

    Zombie Undead2;

    Zombie *Me = newZombie("Wanderer");
    if(!Me)
        std::cout << "Error new" << std::endl;
    Me->announce();

    delete Me;
}
