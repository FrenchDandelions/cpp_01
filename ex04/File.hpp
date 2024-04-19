#include <iostream>
#include <fstream>

class File
{
    private:
        std::string infile;
        std::string outfile;
        std::string to_find;
        std::string to_replace_with;

    public:
        File(char **argv);
        ~File();
        void truncate();
};
