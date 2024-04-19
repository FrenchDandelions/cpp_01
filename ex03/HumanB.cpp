#include "HumanB.hpp"

HumanB::HumanB(std::string name)
{
    setName(name);
    this->Weap = NULL;
    std::cout << "Human B: " << this->Name << " was created without a weapon" << std::endl;
}

void HumanB::setName(std::string &name){
    this->Name = name;
}

const std::string &HumanB::getName(void){
    return(this->Name);
}

void HumanB::setWeapon(Weapon &weapon){
    this->Weap = &weapon;
}

// HumanB::HumanB(std::string name, Weapon &weap)
// {
//     setName(name);
//     setWeapon(weap);
//     std::cout << "Human B: " << this->Name << " was created with the weapon: " << this->Weap->getType() << std::endl;
// }

void HumanB::attack(void){
    if(this->Weap != NULL)
        std::cout << getName() << " attacks with their " << (*Weap).getType() << std::endl;
    else
        std::cout << getName() << " attacks with their bare hands" << std::endl;
}

HumanB::~HumanB()
{
    std::cout << "Human B: " << getName() << " is dead" << std::endl;
}