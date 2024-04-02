#include "Zombie.hpp"


Zombie::Zombie(std::string str){
    std::cout << "Zombie " << str << " emerges from the dead" << std::endl;
    Name = str;
}

Zombie::Zombie(){
    std::string str = "Unamed Wanderer";
    std::cout << "Zombie " << str << " emerges from the dead" << std::endl;
    Name = str;
}

Zombie::~Zombie(){
    std::cout << Name << " is disappearing in the afterlife..." << std::endl;
}

void Zombie::announce(void){
    std::cout << Name << ": BraiiiiiiinnnzzzZ..." << std::endl;
}

void Zombie::randomChump(std::string name){
    Zombie Zombie(name);
    Zombie.announce();
}

Zombie* Zombie::newZombie(std::string name){
    Zombie *Undead;
    Undead = new Zombie(name);
    Undead->announce();
    return (Undead);
}
