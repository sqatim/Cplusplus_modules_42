#include "ReversePolishNotation.hpp"

ReversePolishNotation::ReversePolishNotation(/* args */)
{
}

ReversePolishNotation::ReversePolishNotation(ReversePolishNotation const &src)
{
    *this = src;
    return;
}

ReversePolishNotation &ReversePolishNotation::operator=(ReversePolishNotation const &src)
{
    if (this != &src)
    {
        if (!this->rpn.empty())
            this->rpn.pop();
        this->rpn.push(src.getRpn().top());
    }
    return (*this);
}

int ReversePolishNotation::isValidInput(char *str)
{
    bool sign;

    sign = false;
    if (str[0] == '-' || str[0] == '+')
        sign = true;
    if ((sign == true || str[0] == '/' || str[0] == '*') && !str[1])
        return (TOKEN);
    if (!sign && !isdigit(str[0]))
        return (0);
    else if (!sign && isdigit(str[0]) && str[1])
        return (0);
    else if (sign && !isdigit(str[1]))
        return (0);
    else if (sign && isdigit(str[1]) && str[2])
        return (0);
    else
        return (NUMBER);
}

void ReversePolishNotation::calculateResult(char token)
{
    int number1;
    int number2;

    if (!this->rpn.empty())
    {
        number1 = this->rpn.top();
        this->rpn.pop();
        if (!this->rpn.empty())
        {
            number2 = this->rpn.top();
            this->rpn.pop();
        }
        else
            throw std::string("ERROR: Problem in operand");
    }
    else
        throw std::string("ERROR: Problem in operand");
    if (token == '-')
        this->rpn.push(number2 - number1);
    else if (token == '+')
        this->rpn.push(number2 + number1);
    else if (token == '*')
        this->rpn.push(number2 * number1);
    else if (token == '/')
        this->rpn.push(number2 / number1);
}

ReversePolishNotation::ReversePolishNotation(char *argument)
{
    char *parsed;
    int check;

    parsed = strtok(argument, " ");
    while (parsed)
    {
        check = this->isValidInput(parsed);
        if (!check)
            throw std::string("Error: You must enter a valid input");
        else if (check == NUMBER)
            this->rpn.push(atoi(parsed));
        else
            calculateResult(parsed[0]);
        parsed = strtok(NULL, " ");
    }
    if (this->rpn.size() > 1)
        throw std::string("ERROR: Problem in operands");
    else if (this->rpn.size() == 1)
        std::cout << *this << std::endl;
}

std::stack<int> ReversePolishNotation::getRpn() const
{
    return (this->rpn);
}

std::ostream &operator<<(std::ostream &output, ReversePolishNotation const &src)
{
    output << src.getRpn().top();
    return (output);
}

ReversePolishNotation::~ReversePolishNotation()
{
}