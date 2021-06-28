#include "Intern.hpp"

typedef Form *(*form_t)(std::string);

Form* presidentialPardon(std::string target)
{
    return (Form*)new PresidentialPardonForm(target);
}

Form* robotomyRequest(std::string target)
{
    return (Form*)new RobotomyRequestForm(target);
}

Form* shrubberyCreation(std::string target)
{
    return (Form*)new ShrubberyCreationForm(target);
}

Intern::Intern()
{
    return;
}

Intern::Intern(Intern const& src)
{
    *this = src;
    return;
}

Form* Intern::makeForm(std::string formName, std::string formTarget)
{
    Form* form;
    std::string name[3] = {"shrubbery creation","robotomy request","presidential pardon"};
    form_t forms[3] = {
        shrubberyCreation, robotomyRequest, presidentialPardon
    };  
    for (int i = 0; i < 3; i++)
    {
        if(name[i] == formName)
        {
            form = forms[i](formTarget);
            std::cout << "Intern creates " << form->getName() << std::endl;
            return form;
        }

    }
    throw ErreurExecption();
    return (NULL);
}

const char* Intern::ErreurExecption::what() const throw()
{
    return ("Intern can't creates the form");
}

Intern& Intern::operator=(Intern const& src)
{
    if (this != &src)
    {

    }
    return (*this);
}

Intern::~Intern()
{
    return;
}