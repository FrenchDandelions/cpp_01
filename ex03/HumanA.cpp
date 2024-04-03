#include "HumanA.hpp"

void HumanA::setName(std::string &name)
{
    this->Name = name;
}

void HumanA::setWeapon(Weapon &weap){
    this->weapon = weap;
}

const std::string &HumanA::getName(void){
    return(this->Name);
}

Weapon HumanA::getWeapon(){
    return(this->weapon);
}

void HumanA::attack(void){
    std::cout << getName() << " attacks with their " << weapon.getType() << std::endl;
}

HumanA::HumanA(std::string name, Weapon &weap) : weapon(weap), Name(name)
{
    std::cout << "Human A: " << this->Name << " was created with the weapon: " << weap.getType() << std::endl;
}

HumanA::~HumanA()
{
    std::cout << getName() << " is dead" << std::endl;
}
