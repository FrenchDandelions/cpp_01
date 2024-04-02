#include "Weapon.hpp"

Weapon::Weapon(void)
{
}

Weapon::~Weapon()
{
}

void Weapon::setType(std::string weapon)
{
    type = weapon;
}

const std::string &Weapon::getType()
{
    return(type);
}

