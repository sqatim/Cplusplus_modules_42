#include <iostream>
#include <map>
#include <fstream>
#include <sstream>

class Bitcoin
{
private:
    std::map<std::string, double> m_mapList;
    std::string m_syntax[3];
    void checkSyntax(char *str);
    bool checkLine(char *line, std::string &date, double &value);
    void extractPrice(const std::string &date, const double &value);

public:
    Bitcoin(/* args */);
    std::string calculePrices(char *file);
    ~Bitcoin();
};