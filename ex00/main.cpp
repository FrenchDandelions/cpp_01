#include "Zombie.hpp"

int main(void){

    Zombie Undead("Birdie");

    Undead.randomChump("Random");

    Zombie Undead2;

    Zombie *Me = Undead.newZombie("Wanderer");

    Me->announce();

    delete Me;
}
