#ifndef AWEAPON_HPP
#define AWEAPON_HPP

#include <iostream>

class AWeapon
{
protected:
	std::string m_name;
	unsigned int m_damage;
	unsigned int m_apCost;

public:
	//  Constructors;
	AWeapon();
	AWeapon(std::string const & name, int apcost, int damage);
	AWeapon(AWeapon const& src);

	//  Operator Overload;
	AWeapon& operator=(AWeapon const& src);

	//  Accessors
	std::string const getName() const;
	int getAPCost() const;
	int getDamage() const;

	//	Other Functions
	virtual void attack() const = 0;
	
	virtual ~AWeapon();
};


#endif