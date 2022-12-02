#include "stringreplace.hpp"

void stringreplace(char *filename, std::string str1, std::string str2){
    if (str1.empty()){
        std::cout << "String 1 could not be empty !!" << std::endl;
        return ;
    }
    std::ifstream ifs(filename);
    if (ifs.fail()){
        std::cout << "InFile open failed !! " << std::endl;
        exit(1);
    }
    std::string content;
    std::string buffer;
    while (!ifs.eof()){
        std::getline(ifs, buffer);
        if (ifs.bad()){
            std::cout << "Error while reading input files" << std::endl;
            exit(1);
        }
        content.append(buffer + '\n');
    }
    size_t pos = content.find(str1, 0);
    while (pos < content.length()){
        content.erase(pos, str1.length());
        content.insert(pos, str2);
        pos = content.find(str1, pos + str2.size());
    }
    std::string filenamestr(filename);
    filenamestr.append(".replace");
    std::ofstream ofs(filenamestr.c_str());
    if (ofs.fail()){
        std::cout << "OutFile open failed !! " << std::endl;
        exit(1);
    }
    ofs << content;
    ifs.close();
    ofs.close();
}