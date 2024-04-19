#ifndef ZOMBIE_HPP
#define ZOMBIE_HPP

#include <iostream>

class Zombie
{
    private:
        std::string Name;

    public:
        Zombie(void);
        Zombie(std::string);
        ~Zombie();
        void setName(std::string name);
        void announce(void);
};

Zombie* zombieHorde(int N, std::string name);

#endif
