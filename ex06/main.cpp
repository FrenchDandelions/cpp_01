#include "Harl.hpp"

int main(int argc, char **argv)
{
    if(argc == 2){
        Harl karen;
        std::string str = argv[1];
        karen.complain(str);
    }
    else{
        std::cout << "Error, the program must have one and only one argument" << std::endl;
    }
}
