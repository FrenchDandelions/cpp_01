#include "File.hpp"

int main(int argc, char **argv){
    if(argc == 4)
    {
        File file(argv);
        file.truncate();
    }
    else
        std::cout << "Error, arguments should be : ./executable infile to_find to_trunc_with" << std::endl;
}
