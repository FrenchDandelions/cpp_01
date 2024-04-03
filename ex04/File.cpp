#include "File.hpp"

File::File(char **argv)
{
    this->infile = argv[1];
    this->to_find = argv[2];
    this->to_replace_with = argv[3];
    this->outfile = this->infile + ".replace";
}

void File::truncate()
{
    std::ifstream stream;
    stream.open(this->infile.c_str());
    if(stream.is_open())
    {
        std::ofstream outfile;
        outfile.open(this->outfile.c_str(), std::ofstream::trunc);
        if(outfile.is_open())
        {
            while(1)
            {
                std::string line;
                if(!getline(stream, line))
                    break;
                size_t pos = 0;
                while((pos = line.find(this->to_find, pos)) != std::string::npos)
                {
                    line.erase(pos, this->to_find.length());
                    line.insert(pos, to_replace_with);
                    pos += this->to_find.length();
                }
                outfile << line << std::endl;
            }
            outfile.close();
        }
        else
            std::cout << "Error, there as an issue while opening the outfile" << std::endl;
        stream.close();
    }
    else{
        std::cout << "Error, there was an issue while opening the infile" << std::endl;
    }
}

File::~File()
{
    // std::cout << this->outfile << std::endl;
}
