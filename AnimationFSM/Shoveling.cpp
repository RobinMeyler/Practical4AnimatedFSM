#include "Shoveling.h"
#include <Jumping.h>
#include <Climbing.h>
#include <Idle.h>

#include <string>

void Shoveling::idle(Animation* a)
{
	std::cout << "Jumping -> Idle" << std::endl;
	a->setCurrent(new Idle());
	delete this;
}
void Shoveling::climbing(Animation* a)
{
	std::cout << "Jumping -> Climbing" << std::endl;
	a->setCurrent(new Climbing());
	delete this;
}