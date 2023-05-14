#include <stack>
#include <iostream>
#include <cstdlib>
class RPN
{
private:
    std::stack<int> rpn;
public:
    RPN(/* args */);
    RPN(char *argument);
    std::stack<int> getRpn() const;
    ~RPN();
};

