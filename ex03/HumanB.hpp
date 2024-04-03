#include "Weapon.hpp"

class HumanB
{
    private:

        Weapon *Weap;

        std::string Name;
    
    public:

        HumanB(std::string Name);

        HumanB(std::string Name, Weapon &weapon);

        ~HumanB();

        void setName(std::string &Name);

        const std::string &getName();

        void setWeapon(Weapon &wep);

        void attack();

};
