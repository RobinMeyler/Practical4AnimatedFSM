#include "SwordmanShip.h"

#include "Shoveling.h"
#include <Jumping.h>
#include <Climbing.h>
#include <Idle.h>
#include <Hammering.h>




void SwordmanShip::idle(Animation * a)
{
	std::cout << "SwordmanShip -> Idle" << std::endl;
	a->setCurrent(new Idle());
	delete this;
}

void SwordmanShip::climbing(Animation * a)
{
	std::cout << "SwordmanShip -> Climbing" << std::endl;
	a->setCurrent(new Climbing());
	delete this;
}

void SwordmanShip::jumping(Animation * a)
{
	std::cout << "SwordmanShip -> Jumping" << std::endl;
	a->setCurrent(new Jumping());
	delete this;
}

void SwordmanShip::hammering(Animation * a)
{
	std::cout << "SwordmanShip -> Hammering" << std::endl;
	a->setCurrent(new Hammering());
	delete this;
}

void SwordmanShip::shoveling(Animation * a)
{
	std::cout << "SwordmanShip -> Shoveling" << std::endl;
	a->setCurrent(new Shoveling());
	delete this;
}
