#include <iostream>
#include <fstream>


std::string readingTheFile()
{
    std::ifstream myReadFile("FILENAME");
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

void writingInTheFile(std::string const& text)
{
    std::ofstream myWriteFile("FILENAME.replace");
    myWriteFile << text;
    myWriteFile.close();

}
int main(int ac, char **av)
{
    if(ac == 3)
    {        
        std::string text;
        text = readingTheFile();
        searchAndReplace(text,av[1], av[2]);
        writingInTheFile(text);
        // std::cout << text << std::endl;
    }
    else
    {
        std::cout << "U have probleme in arguments" << std::endl;
    }
    return (0);
}