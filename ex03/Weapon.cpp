#include "Weapon.hpp"

Weapon::Weapon(const std::string &weapon) : type(weapon)
{
}

Weapon::~Weapon()
{
}

void Weapon::setType(const std::string &weapon)
{
    this->type = weapon;
}

const std::string &Weapon::getType()
{
    return(this->type);
}

