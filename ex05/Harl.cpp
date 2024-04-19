#include "Harl.hpp"

Harl::Harl(void)
{
    std::cout << "\033[1;31mBe careful, we have spotted a Karen in the restaurant!\033[0m" << std::endl;
}

Harl::~Harl()
{
    std::cout << "\033[1;96mThe Karen is gone now! Good job everyone!\033[0m" << std::endl;
}

void Harl::debug(void){
    std::cout << "I love having extra bacon for my 7XL-double-cheese-triple-pickle-specialketchup burger. I really do!" << std::endl;
}

void Harl::info(void){
    std::cout << "I cannot believe adding extra bacon costs more money. You didn't put enough bacon in my burger! If you did, I wouldn't be asking for more!" << std::endl;
}

void Harl::warning(void){
    std::cout << "I think I deserve to have some extra bacon for free. I've been coming for years whereas you started working here since last month." << std::endl;
}

void Harl::error(void){
    std::cout << "This is unacceptable! I want to speak to the manager now." << std::endl;
    
}

void Harl::falseAlarm(void){
    std::cout << "*Karen's on another one of her complaint sprees! Just nod and smile, folks, let the drama unfold.*" << std::endl;
}

void Harl::complain(std::string level)
{
    std::string tab[5] = {"DEBUG", "INFO", "WARNING", "ERROR", level};
    void (Harl::*func[5])() = {&Harl::debug, &Harl::info, &Harl::warning, &Harl::error, &Harl::falseAlarm};
    for(int i = 0; i < 5; i++){
        if(tab[i] == level)
        {
            (this->*func[i])();
            break;
        }
    }
}
