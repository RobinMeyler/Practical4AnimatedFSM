#ifndef PLAYER_H
#define PLAYER_H

#include <Input.h>
#include <Animation.h>
#include <AnimatedSprite.h>

class Player
{
private:
	Animation m_animation;
	AnimatedSprite m_animated_sprite;
	AnimatedSprite animated_spriteIdle;
	AnimatedSprite animated_spriteJumping;
	Player();
public:
	Player(const AnimatedSprite&);
	~Player();
	Animation getAnimationState();
	AnimatedSprite& getAnimatedSprite();
	void setAnimation(AnimatedSprite s);
	void handleInput(Input);
	void update();
};

#endif // !PLAYER_H
