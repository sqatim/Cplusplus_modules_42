#include "Convert.class.hpp"

int		ft_isdigit(int c)
{
	if (c >= '0' && c <= '9')
		return (1);
	return (0);
}

int check_f(std::string str, int i, int index, int check)
{
	if (index == 0)
	{
		if (ft_isdigit(str[i]) != 1 && str[i] != '.' && \
		((str[i] != 'f' && str[i] != 'F') || ((str[i] == 'f' || str[i] == 'F') && check == 0) || \
		((str[i] == 'f' || str[i] == 'F') && str[i + 1] != '\0' )))
			return (0);
	}
	if (index == 1)
	{
		if ((i == 0 && !ft_isdigit(str[i + 1])) || \
			((str[i + 1] == 'f' || str[i+ 1] == 'F') && str[i + 2] != '\0'))
		return (0);
	}
	return (1);
}

int	check_double(std::string str)
{
	int i;
	int check;
    double checkNanInf;

	i = 0;
	check = 0;
    checkNanInf = std::stod(str);
    if (std::isnan(checkNanInf) || std::isinf(checkNanInf))
        return (1);
	else if (str[0] == '\0')
		return (0);
	if (str[0] == '-' || str[0] == '+')
		i++;
	while (str[i])
	{
		if (!check_f(str, i, 0, check))
			return (0);
		if (str[i] == '.')
		{
			if(!check_f(str, i, 1, check))
				return (0);
			if (check == 1)
				return (0);
			check = 1;
		}
		i++;
	}
	return (1);
}

const char * Convert::ImpossibleException::what() const throw()
{
    return ("char : impossible\nint : impossible\nfloat : impossible\ndouble : impossible");
}

void Convert::convertToFloat()
{
    this->m_floatNumber = static_cast<float>(this->m_doubleNumber);
    std::cout << "float: " << std::fixed << this->m_floatNumber << "f" << std::endl;
}

void Convert::convertToInt()
{
    this->m_intNumber = static_cast<int>(this->m_doubleNumber);
    std::cout << "int: " << this->m_intNumber << std::endl;
}

void Convert::convertToChar()
{
    this->m_character = static_cast<char>(this->m_doubleNumber);
    if(std::isprint(this->m_character))
        std::cout << "char: '" <<this->m_character << "'" << std::endl;
    else
        std::cout << "char: Non displayable" << std::endl;

}

void Convert::isNanInf()
{
    std::cout << "char: impossible" << std::endl;
    std::cout << "int: impossible" << std::endl;
    convertToFloat();
    std::cout << "double: " << this->m_doubleNumber << std::endl;
}

void Convert::isCorrect()
{
    convertToChar();
    convertToInt();
    convertToFloat();
    std::cout << "double: " << this->m_doubleNumber << std::endl;
}

Convert::Convert(std::string number)
{
    if(!check_double(number))
        throw ImpossibleException();
    this->m_doubleNumber = std::stod(number);
    if(std::isnan(this->m_doubleNumber) || std::isinf(this->m_doubleNumber))
        this->isNanInf();
    else
        this->isCorrect();
    return ;
}


Convert::~Convert()
{
    return ;
}