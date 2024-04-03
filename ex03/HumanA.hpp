#include "Weapon.hpp"

class HumanA
{
    private:

        Weapon &weapon;

        std::string Name;
    
    public:

        HumanA(std::string Name, Weapon &weap);

        ~HumanA();

        void setName(std::string &Name);

        void setWeapon(Weapon &weap);

        const std::string &getName();

        Weapon getWeapon();

        void attack();

};
