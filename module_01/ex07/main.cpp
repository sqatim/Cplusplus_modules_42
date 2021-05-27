#include <iostream>
#include <fstream>


std::string readingTheFile(std::string filename)
{
    std::ifstream myReadFile(filename);
    std::string text;
    std::string line;

    text = "\0";
    while(std::getline(myReadFile, line))
    {
            text += line;
            if(!myReadFile.eof())
                text += "\n";
    }
    myReadFile.close();
    return (text);
}

void searchAndReplace(std::string& text, std::string const& occurence, std::string const& word)
{
    unsigned long index;

    while((index = text.find(occurence)) != std::string::npos)
    {
        text.erase(index, occurence.size());
        text.insert(index, word);
    }
}

void writingInTheFile(std::string const& text, std::string str)
{
    for(unsigned int i = 0; i < str.length(); i++)
    {
        str[i] = std::toupper(str[i]);
    }
    str += ".replace";
    std::ofstream myWriteFile(str);
    myWriteFile << text;
    myWriteFile.close();

}
int main(int ac, char **av)
{
    if(ac == 4)
    {        
        std::string text;
        text = readingTheFile(av[1]);
        searchAndReplace(text,av[2], av[3]);
        writingInTheFile(text, av[1]);
    }
    else
    {
        std::cout << "U have probleme in arguments" << std::endl;
    }
    return (0);
}
