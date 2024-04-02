#include "Zombie.hpp"

int main(void){

    Zombie Undead("Birdie");

    Undead.randomChump("Random");

    Zombie Undead2;

    Zombie *Me = Undead.newZombie("Wanderer");

    Zombie *New = NULL;

    New = Undead.zombieHorde(5, "Horde");

    for(int i = 0; i < 5; i++){
        New[i].announce();
    }

    Me->announce();

    delete Me;

    delete [] New;
}
