#ifndef PLASMARIFLE_HPP
#define PLASMARIFLE_HPP

#include "AWeapon.hpp"

class PlasmaRifle : public AWeapon
{
private:
	/* data */
public:
	// Constructors
	PlasmaRifle();
	PlasmaRifle(PlasmaRifle const& src);

	//	Operators Overload
	PlasmaRifle& operator=(PlasmaRifle const& src);

	//	Other functions;
	virtual void attack() const;
	
	virtual ~PlasmaRifle();
};



#endif