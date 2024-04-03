#include "Harl.hpp"

int main(void)
{
    Harl karen;

    for(int i = 0; 1; i++)
    {
        if(i == 0)
            std::cout << std::endl << "\033[0;32mBe careful, Karen is starting to complain...\033[0m" << std::endl;
        else
            std::cout << std::endl << "\033[0;32mBe careful, it looks like Karen is complaining again...\033[0m" << std::endl;
        std::string str;
        if(!getline(std::cin, str) || std::cin.eof())
        {
            std::cout << "\033[0;32mShe didn't! She's going away!\033[0m" << std::endl;
            break;
        }
        karen.complain(str);
    }
    std::cout << std::endl;
}
