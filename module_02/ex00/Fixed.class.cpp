#include "Fixed.class.hpp"


Fixed::Fixed() : m_number(0)
{
	std::cout << "Default constructor called" << std::endl;
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
	std::cout << "getRawBits member function called" << std::endl;
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

Fixed::~Fixed()
{
	std::cout << "Destructor called" << std::endl;
}
