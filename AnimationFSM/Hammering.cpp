#include <Climbing.h>
#include <Jumping.h>
#include <Idle.h>
#include <Hammering.h>
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
//void Hammering::jumping(Animation* a)
//{
//	std::cout << "Climbing -> Jump" << std::endl;
//	a->setCurrent(new Jumping());
//	delete this;
//}