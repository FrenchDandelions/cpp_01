#include <iostream>
#include <map>

class Harl
{
    private:

        void debug(void);

        void info(void);

        void warning(void);

        void error(void);

        void falseAlarm(void);

    public:

        Harl();

        ~Harl();

        void complain(std::string level);


};
