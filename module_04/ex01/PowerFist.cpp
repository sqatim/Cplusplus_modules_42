#include "PowerFist.hpp"

PowerFist::PowerFist()
{
    this->m_name = "Power Fist";
	this->m_damage = 50;
	this->m_apCost = 8;
	return ;
}

PowerFist::PowerFist(PowerFist const& src)
{
	*this = src;
	return ;
}


PowerFist& PowerFist::operator=(PowerFist const& src)
{
	if(this != &src)
	{
		this->m_name = src.m_name;
		this->m_damage = src.m_damage;
		this->m_apCost = src.m_apCost;
	}
	return (*this);
}

void PowerFist::attack() const
{
	std::cout << "* pschhh... SBAM! *" << std::endl;
}

PowerFist::~PowerFist()
{

}