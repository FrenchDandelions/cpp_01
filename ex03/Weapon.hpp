#include <iostream>

#ifndef WEAPON_HPP
# define WEAPON_HPP

class Weapon
{
    private:
        std::string type;
    public:
        Weapon(const std::string &weapon);
        ~Weapon();
        void setType(const std::string &type);
        const std::string &getType();
};

#endif
