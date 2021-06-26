#include "ShrubberyCreationForm.hpp"
#include <fstream>
ShrubberyCreationForm::ShrubberyCreationForm(std::string target) : Form("ShrubberyCreationForm", 145, 137), m_target(target)
{
    return ;
}

ShrubberyCreationForm::ShrubberyCreationForm(ShrubberyCreationForm const& src) : Form("ShrubberyCreationForm", 145, 137), m_target(src.m_target)
{

}

ShrubberyCreationForm& ShrubberyCreationForm::operator=(ShrubberyCreationForm const& src)
{
    if(this != &src)
    {
        this->m_target = src.m_target;
    }   
    return (*this);
}

void ShrubberyCreationForm::action() const
{
    std::string  fileName =  this->m_target + "_shrubbery";
    std::ofstream myFile(fileName);
    myFile << "              .     .  .      +     .      .          .\n";
    myFile << "     .       .      .     #       .           .\n";
    myFile << "        .      .         ###            .      .      .\n";
    myFile << "      .      .   \"#:. .:##\"##:. .:#\"  .      .\n";
    myFile << "          .      . \"####\"###\"####\"  .\n";
    myFile << "       .     \"#:.    .:#\"###\"#:.    .:#\"  .        .       .\n";
    myFile << "  .             \"#########\"#########\"        .        .\n";
    myFile << "        .    \"#:.  \"####\"###\"####\"  .:#\"   .       .\n";
    myFile << "     .     .  \"#######\"\"##\"##\"\"#######\"                  .\n";
    myFile << "                .\"##\"#####\"#####\"##\"           .      .\n";
    myFile << "    .   \"#:. ...  .:##\"###\"###\"##:.  ... .:#\"     .\n";
    myFile << "      .     \"#######\"##\"#####\"##\"#######\"      .     .\n";
    myFile << "    .    .     \"#####\"\"#######\"\"#####\"    .      .\n";
    myFile << "            .     \"      000      \"    .     .\n";
    myFile << "       .         .   .   000     .        .       .\n";
    myFile << ".. .. ..................O000O........................ ......\n";
    myFile.close();
}

ShrubberyCreationForm::~ShrubberyCreationForm()
{
    
}