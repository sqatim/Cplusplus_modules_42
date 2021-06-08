#include "PlasmaRifle.hpp"

PlasmaRifle::PlasmaRifle()
{
	this->m_name = "Plasma Rifle";
	this->m_damage = 21;
	this->m_apCost = 5;
	return ;
}

PlasmaRifle::PlasmaRifle(PlasmaRifle const& src)
{
	*this = src;
	return ;
}

PlasmaRifle& PlasmaRifle::operator=(PlasmaRifle const& src)
{
	if(this != &src)
	{
		this->m_name = src.m_name;
		this->m_damage = src.m_damage;
		this->m_apCost = src.m_apCost;
	}
	return (*this);
}

void PlasmaRifle::attack() const
{
	std::cout << "* pschhh... SBAM! *" << std::endl;
}

PlasmaRifle::~PlasmaRifle()
{

	return ;
}