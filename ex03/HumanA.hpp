#include "Weapon.hpp"

class HumanA
{
    private:

        Weapon Weapon;

        std::string Name;
    
    public:

        HumanA(std::string Name, std::string weapon);

        ~HumanA();

        void setName(std::string &Name);

        std::string getName();
};
