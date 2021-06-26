#include "RobotomyRequestForm.hpp"

RobotomyRequestForm::RobotomyRequestForm(std::string target) : Form("RobotomyRequestForm",72,45), m_target(target)
{

}

RobotomyRequestForm::RobotomyRequestForm(RobotomyRequestForm const& src) : Form("RobotomyRequestForm",72,45), m_target(src.m_target)
{

}

std::string noise()
{
    std::string noise;
    noise +="           _                                                           \n";
    noise +="        ./ |   _________________                                       \n";
    noise +="        /  /   /  __________    //\\_                                   \n";
    noise +="      /'  /   |  (__________)  ||.' `-.________________________        \n";
    noise +="     /   /    |    __________  ||`._.-'~~~~~~~~~~~~~~~~~~~~~~~~`       \n";
    noise +="    /    \\     \\__(__________)__\\/                                    \n";
    noise +="   |      `\\                                                           \n";
    noise +="   |        |                                ___________________       \n";
    noise +="   |        |___________________...-------'''- - -  =- - =  - = `.     \n";
    noise +="  /|        |                   \\-  =  = -  -= - =  - =-   =  - =|     \n";
    noise +=" ( |        |                    |= -= - = - = - = - =--= = - = =|     \n";
    noise +="  \\|        |___________________/- = - -= =_- =_-=_- -=_=-=_=_= -|     \n";
    noise +="   |        |                   ```-------...___________________.'     \n";
    noise +="   |________|           ,--------,                                     \n";
    noise +="     \\    /             ,--------,' |                                  \n"; 
    noise +="     |    |            |    _     | |                                  \n";
    noise +="   ,-'    `-,          |  .' `.   | |                                  \n";
    noise +="   |        |          |  `._.'   | |                                  \n";
    noise +="   `--------'          |          |,',-,-,-,-,-,-,-,-,-,-,-,-,-,-==,   \n";
    noise +="                       |__________\\------------------------------=='   ";
    return (noise);
}

RobotomyRequestForm& RobotomyRequestForm::operator=(RobotomyRequestForm const& src)
{
    if(this != &src)
    {
        this->m_target = src.m_target;   
    }
    return (*this);
}

void RobotomyRequestForm::action() const
{
    int index;

    srand(time(0));
	index = rand() % 2;
    if(index == 0)
        std::cout << this->m_target << " has been robotomized failure" << std::endl;
    else
    {
        std::cout << noise() << std::endl;
        std::cout << this->m_target << " has been robotomized successfully" << std::endl;
    }
}

RobotomyRequestForm::~RobotomyRequestForm()
{
    
}