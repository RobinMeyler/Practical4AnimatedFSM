#include <Climbing.h>
#include <Jumping.h>
#include <Idle.h>
#include <Hammering.h>
#include <Shoveling.h>
#include <SwordmanShip.h>
#include <string>

void Climbing::idle(Animation* a)
{
	std::cout << "Climbing -> Idle" << std::endl;
	a->setCurrent(new Idle());
	delete this;
}
void Climbing::jumping(Animation* a)
{
	std::cout << "Climbing -> Jump" << std::endl;
	a->setCurrent(new Jumping());
	delete this;
}

void Climbing::hammering(Animation * a)
{
	std::cout << "Climbing -> Hammering" << std::endl;
	a->setCurrent(new Hammering());
	delete this;
}

void Climbing::shoveling(Animation * a)
{
	std::cout << "Climbing -> Shoveling" << std::endl;
	a->setCurrent(new Shoveling());
	delete this;
}

void Climbing::swordmanShip(Animation * a)
{
	std::cout << "Climbing -> SwordmanShip" << std::endl;
	a->setCurrent(new SwordmanShip());
	delete this;
}
