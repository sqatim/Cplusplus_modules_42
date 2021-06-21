#ifndef WINGMAN_HPP
#define WINGMAN_HPP

#include "AWeapon.hpp"

class Wingman : public AWeapon
{
private:
	/* data */
public:
	// Constructors
	Wingman();
	Wingman(Wingman const& src);

	//	Operators Overload
	Wingman& operator=(Wingman const& src);

	//	Other functions;
	virtual void attack() const;
	
	virtual ~Wingman();
};



#endif