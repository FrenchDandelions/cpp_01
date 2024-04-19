#include "Zombie.hpp"

int main(void)
{
    Zombie *me = zombieHorde(3, "Coucou");
    if(!me)
        std::cout << "Error new" << std::endl;
    for(int i = 0; i < 3; i++){
            me[i].announce();
        }
    delete [] me;
}
