#ifndef SHFPOSIX_HPP
#define SHFPOSIX_HPP

#include <iostream>
#include <stdlib.h>
#include <string>
#include <list>

// Here we have some constants that is by default in the most OS's.

#define RMDIR "rmdir "
#define MKDIR "mkdir "
#define ECHO "echo "

namespace FileFormats
{
    enum FILES_SUPPORTED
    {
        TXT_FILE,
        XML_FILE
    };

    enum SEARCH_FILTERS
    {
        ALL_UPPER,
        ALL_LOWER,
        JUST_FIND
    };
    class Text
    {
    private:
        std::list<std::string> list;

    public:
        Text(std::string data);
        void addContent(std::string &data);
        void deleteFile(std::string &namefile);
        void createFile(int &FILE);
        void findAWord(std::string &word, short int &OPERATION);
    };
}
namespace Functions
{
    class ShellFunctions
    {
    public:
        static void createFolders(const std::vector<std::string> &folders);
        static void removeFolders(const std::vector<std::string> &folders);
        static void createFolder(const std::string &folder);
        static void removeFolder(const std::string &folder);
    };
}

#if __linux__
// Here, we have to make some modifications...
#define CLEAR "clear"
#define LS "ls"

#elif _WIN32
#define CLEAR "clear"
#define LS "ls"

#endif

#endif