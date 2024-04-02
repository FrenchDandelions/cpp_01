#include "Weapon.hpp"

class HumanB
{
    private:

        Weapon Weapon;

        std::string Name;
    
    public:

        HumanB(std::string Name);

        HumanB(std::string Name, std::string weapon);

        ~HumanB();

        void setName(std::string &Name);

        std::string getName();
};

HumanB::HumanB(std::string name)
{
}

HumanB::~HumanB()
{
}

