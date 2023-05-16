#include <stack>
#include <iostream>
#include <cstdlib>
#include <cctype>

#define TOKEN 1
#define NUMBER 2

class ReversePolishNotation
{
private:
    std::stack<int> rpn;
    int isValidInput(char *str);
    void calculateResult(char token);
    ReversePolishNotation(/* args */);

public:
    ReversePolishNotation(char *argument);
    ReversePolishNotation(ReversePolishNotation const &src);
    ReversePolishNotation &operator=(ReversePolishNotation const &src);
    std::stack<int> getRpn() const;
    ~ReversePolishNotation();
};

std::ostream &operator<<(std::ostream &output, ReversePolishNotation const &src);