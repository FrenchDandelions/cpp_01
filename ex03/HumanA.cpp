#include "HumanA.hpp"

void HumanA::setName(std::string &name)
{
    Name = name;
}

HumanA::HumanA(std::string name, std::string weapon)
{
    std::cout << "Human A created with a new Weapon" << std::endl;
    Weapon.setType(weapon);
    setName(name);
}

HumanA::~HumanA()
{
}
