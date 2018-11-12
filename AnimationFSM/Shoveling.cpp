#include "Shoveling.h"
#include <Jumping.h>
#include <Climbing.h>
#include <Idle.h>
#include <Hammering.h>
#include <SwordmanShip.h>
#include <string>

void Shoveling::idle(Animation* a)
{
	std::cout << "Shoveling -> Idle" << std::endl;
	a->setCurrent(new Idle());
	delete this;
}
void Shoveling::climbing(Animation* a)
{
	std::cout << "Shoveling -> Climbing" << std::endl;
	a->setCurrent(new Climbing());
	delete this;
}
void Shoveling::jumping(Animation * a)
{
	std::cout << "Shoveling -> Jumping" << std::endl;
	a->setCurrent(new Jumping());
	delete this;
}
void Shoveling::hammering(Animation * a)
{
	std::cout << "Shoveling -> Hammering" << std::endl;
	a->setCurrent(new Hammering());
	delete this;
}

void Shoveling::swordmanShip(Animation * a)
{
	std::cout << "Shoveling -> SwordmanShip" << std::endl;
	a->setCurrent(new SwordmanShip());
	delete this;
}
