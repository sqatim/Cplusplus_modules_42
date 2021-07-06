#include "Fixed.class.hpp"

Fixed::Fixed() : m_number(0)
{
	std::cout << "Default constructor called" << std::endl;
	return ;
}

Fixed::Fixed(const int number)
{
	std::cout << "Int constructor called" << std::endl;
	this->m_number = roundf(number * (1 << 8));
	return ;
}

Fixed::Fixed(const float number)
{
	std::cout << "Float constructor called" << std::endl;
	this->m_number = roundf(number * (1 << 8));
	return ;
}

Fixed::Fixed(Fixed const& src)
{
	std::cout << "Copy constructor called" << std::endl;
	*this = src;
	return ;
}

int	Fixed::getRawBits(void) const
{
	return (this->m_number);
}

Fixed& Fixed::operator=(Fixed const& src)
{
	std::cout << "Assignation operator called" << std::endl;
	this->m_number = src.getRawBits();
	return (*this);
}

void Fixed::setRawBits(int const raw)
{
	this->m_number = raw;
	return ;
}

float Fixed::toFloat() const
{
	float number;

	number = (float)m_number / (1 << this->_nBits);
	return (number);
}

int Fixed::toInt() const
{
	int number;

	number = m_number / (1 << this->_nBits);
	return (number);
}

Fixed::~Fixed()
{
	std::cout << "Destructor called" << std::endl;
}

std::ostream& operator<<(std::ostream& output, Fixed const& src)
{
	output <<  src.toFloat();
	return (output);
}
