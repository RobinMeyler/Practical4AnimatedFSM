#include <Climbing.h>
#include <Jumping.h>
#include <Idle.h>
#include <Hammering.h>
#include <Shoveling.h>
#include <SwordmanShip.h>
#include <string>

void Hammering::idle(Animation* a)
{
	std::cout << "Hammering -> Idle" << std::endl;
	a->setCurrent(new Idle());
	delete this;
}
void Hammering::jumping(Animation* a)
{
	std::cout << "Hammering -> Jump" << std::endl;
	a->setCurrent(new Jumping());
	delete this;
}

void Hammering::climbing(Animation* a)
{
	std::cout << "Hammering -> Climbing" << std::endl;
	a->setCurrent(new Climbing());
	delete this;
}
void Hammering::shoveling(Animation * a)
{
	std::cout << "Hammering -> Shoveling" << std::endl;
	a->setCurrent(new Shoveling());
	delete this;
}

void Hammering::swordmanShip(Animation * a)
{
	std::cout << "Hammering -> SwordmanShip" << std::endl;
	a->setCurrent(new SwordmanShip());
	delete this;
}
