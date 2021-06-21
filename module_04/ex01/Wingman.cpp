#include "Wingman.hpp"

Wingman::Wingman()
{
	this->m_name = "Wingman";
	this->m_damage = 27;
	this->m_apCost = 4;
	return ;
}

Wingman::Wingman(Wingman const& src)
{
	*this = src;
	return ;
}

Wingman& Wingman::operator=(Wingman const& src)
{
	if(this != &src)
	{
		this->m_name = src.m_name;
		this->m_damage = src.m_damage;
		this->m_apCost = src.m_apCost;
	}
	return (*this);
}

void Wingman::attack() const
{
	std::cout << "* Peeeesh...pessh! *" << std::endl;
}

Wingman::~Wingman()
{

	return ;
}