#include <iostream>
#include <stdlib.h>
#include <string>
#include <locale>
#include <vector>
#include <stdexcept>
#if __linux
    namespace Functions{
        class ShellFunctions{
            public:
            static void createFolders(std::vector<std::string> folders);
            static void removeFolders(std::vector<std::string> folders);
            static void createFolder(std::string folder);
            static void removeFolder(std::vector<std::string> folder);
        };
    };



/*To include in header later*/

void Functions::ShellFunctions::createFolders(std::vector<std::string> folders){
    try{
        if(folders.size() != 0){
            std::vector<std::string>::iterator it;
            std::string parse;

            for(it = folders.begin();it != folders.end();it++){
                parse += *it + " ";
            }  
            std::system(parse.c_str());
        }   
        else{
            throw std::runtime_error("You didn't set a valid foldername");
        }     
    }
    catch(std::exception error){
        throw error;
    }

}

#elif _WIN32



#endif
