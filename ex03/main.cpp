#include "HumanA.hpp"
#include "HumanB.hpp"

int main(void){

    {
        std::cout << "********Test 1********" << std::endl;
        Weapon club = Weapon("crude spiked club");
        HumanA bob("Bob", club);
        bob.attack();
        club.setType("some other type of club");
        bob.attack();
    }
    {
        std::cout << std::endl << "********Test 2********" << std::endl;
        Weapon club = Weapon("crude spiked club");
        HumanB jim("Jim");
        jim.setWeapon(club);
        jim.attack();
        club.setType("some other type of club");
        jim.attack();
    }
    {
        std::cout << std::endl << "********Test 3********" << std::endl;
        /* this is a test that SHOULDN'T be done,
        since derefencing pointers to get their reference
        is a bad practice, but i can do it since HumanB takes a pointer,
        doing so with HumanA will occur a segfault, you should never have to check
        if a reference is NULL since it should never be NULL
        */
        Weapon *club = new Weapon("Pikachu");
        HumanB *jim = new HumanB("Thomas");
        jim->setWeapon(*club);
        jim->attack();
        delete club;
        Weapon *arm = NULL;
        jim->setWeapon(*arm);
        jim->attack();
        Weapon newWeap("Tiplouf");
        jim->setWeapon(newWeap);
        jim->attack();
        delete arm;
        delete jim;
    }
}
