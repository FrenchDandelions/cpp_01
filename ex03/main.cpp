#include "HumanA.hpp"
#include "HumanB.hpp"

int main(void){

    {
        Weapon club = Weapon("crude spiked club");
        HumanA bob("Bob", club);
        bob.attack();
        club.setType("some other type of club");
        bob.attack();
    }
    {
        Weapon club = Weapon("crude spiked club");
        HumanB jim("Jim");
        jim.setWeapon(club);
        jim.attack();
        club.setType("some other type of club");
        jim.attack();
    }
    {
        Weapon *club = new Weapon("Pikachu");
        HumanB *jim = new HumanB("Thomas", *club);
        jim->setWeapon(*club);
        jim->attack();
        club->setType("Tiplouf");
        jim->attack();
        delete club;
        delete jim;
    }
}
