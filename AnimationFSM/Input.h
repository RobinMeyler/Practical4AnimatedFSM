#ifndef INPUT_H
#define INPUT_H
class Input
{
public:
	Input();
	~Input();

	enum Action
	{
		IDLE,
		CLIMBING,
		JUMPING,
		HAMMERING,
		SHOVELING, 
		SWORDMANSHIP
	};

	void setCurrent(Action);
	void shoveling();
	Action getCurrent();

private:
	Action m_current;
};
#endif