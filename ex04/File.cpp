#include "File.hpp"

File::File(char **argv)
{
    if(!argv[1] || !argv[2] || !argv[3])
        std::cout << "Error, nothing was set since there wasn't 4 arguments passed in the array" << std::endl;
    else
    {
        this->infile = argv[1];
        this->to_find = argv[2];
        this->to_replace_with = argv[3];
        this->outfile = this->infile + ".replace";
    }
    
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
            std::string line = "";
            while(1)
            {
                std::string line_to_concatenate;
                if(!getline(stream, line_to_concatenate))
                    break;
                if(line.size() > 0)
                    line.append("\n");
                line += line_to_concatenate;
            }
            size_t pos = 0;
            while((pos = line.find(this->to_find, pos)) != std::string::npos)
            {
                line.erase(pos, this->to_find.length());
                line.insert(pos, to_replace_with);
                pos += this->to_find.length();
            }
            outfile << line << std::endl;
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
}
