#include "RPN.hpp"

RPN::RPN(/* args */)
{
}

RPN::RPN(char *argument)
{
    char *parsed;
    while (parsed)
    {
        std::cout << parsed << std::endl;
        this->rpn.push(atoi(parsed));
        parsed = strtok(NULL, " ");
    }
    std::cout << this << std::endl;
}

std::stack<int> RPN::getRpn() const
{
    return (this->rpn);
}

RPN::~RPN()
{
}



std::ostream& operator<<(std::ostream& output, RPN const& src)
{
    while(!src.getRpn().empty())
    {
	output <<  src.getRpn().top();
	src.getRpn().pop();
    }
	return (output);
}
