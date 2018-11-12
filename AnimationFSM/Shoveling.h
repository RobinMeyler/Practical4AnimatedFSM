#ifndef SHOVELING_H
#define SHOVELING_H

#include <State.h>

class Shoveling : public State
{
public:
	Shoveling() {};
	~Shoveling() {};
	void idle(Animation* a);
	void climbing(Animation* a);
	void jumping(Animation* a);
	void hammering(Animation* a);
	void swordmanShip(Animation* a);
};

#endif // !IDLE_H