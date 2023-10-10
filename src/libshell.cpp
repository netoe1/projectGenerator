#include <iostream>
#include <stdlib.h>
#include <string>
#include <vector>
#include <stdexcept>
#include <list>
#include <algorithm>

// Custom libraries
#include "../include/libshell.hpp"

void Functions::ShellFunctions::createFolders(const std::vector<std::string> &folders)
{
    if (folders.empty())
    {
        throw std::runtime_error("You didn't set a valid string for creating folders.\nTry reading the docs if you have any questions.");
    }

    std::string parse;
    for (const std::string &folder : folders)
    {
        parse += folder + " ";
    }

    std::system((MKDIR + parse).c_str());
}
void Functions::ShellFunctions::removeFolders(const std::vector<std::string> &folders)
{
    if (folders.empty())
    {
        throw std::runtime_error("You didn't set a valid folder name.");
    }

    std::string parse;
    for (const std::string &folder : folders)
    {
        parse += folder + " ";
    }

    std::system((RMDIR + parse).c_str());
}
void Functions::ShellFunctions::createFolder(const std::string &folder)
{
    if (folder.empty())
    {
        throw std::runtime_error("You set an invalid string for this type of operation or the string you passed as an argument is invalid.");
    }

    std::system((MKDIR + folder).c_str());
}
void Functions::ShellFunctions::removeFolder(const std::string &folder)
{
    if (folder.empty())
    {
        throw std::runtime_error("You set an invalid string for this type of operation or the string you passed as an argument is invalid.");
    }

    std::system((RMDIR + folder).c_str());
}

// File format namespace

FileFormats::Text::Text(std::string data)
{
    try
    {
        if (!data.empty())
        {
            this->list.push_back(data);
        }
    }
    catch (std::exception err)
    {
        throw std::runtime_error("Invalid input for Text() function.");
    }
}
void FileFormats::Text::addContent(std::string &data)
{
    try
    {
        if (!data.empty())
        {
            this->list.push_back(data);
        }
    }
    catch (std::exception err)
    {
        throw std::runtime_error("Invalid string for Text() function.");
    }
}
// void FileFormats::Text::deleteFile(std::string &namefile);
// void FileFormats::Text::createFile(int &file);