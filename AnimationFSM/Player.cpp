#include <iostream>
#include <Player.h>
#include <Idle.h>
#include <Debug.h>
#include <SFML/Graphics.hpp>

Player::Player()
{
	m_animation.setCurrent(new Idle());
	m_animation.setPrevious(new Idle());

	
	
	
}

Player::Player(const AnimatedSprite& s) : m_animated_sprite(s)
{
	m_animation.setCurrent(new Idle());
	m_animation.setPrevious(new Idle());

	
	
}

Player::~Player() {}

Animation Player::getAnimationState()
{
	return m_animation;
}



AnimatedSprite& Player::getAnimatedSprite()
{
	int frame = m_animated_sprite.getCurrentFrame();
	m_animated_sprite.setTextureRect(m_animated_sprite.getFrame(frame));
	return m_animated_sprite;
}

void Player::setAnimation(AnimatedSprite  s)
{
	m_animated_sprite = s;
}

void Player::handleInput(Input in)
{
	DEBUG_MSG("Handle Input");

	switch (in.getCurrent())
	{
	case Input::Action::IDLE:
	
		m_animation.idle();
		break;
	case Input::Action::CLIMBING:
		
		m_animation.climbing();
		break;
	case Input::Action::JUMPING:
	
		m_animation.jumping();
		break;
	case Input::Action::HAMMERING:
	
		m_animation.hammering();
		break;
	case Input::Action::SHOVELING:
		
		m_animation.shoveling();
		break;
	case Input::Action::SWORDMANSHIP:

		m_animation.swordmanShip();
		break;
	default:
		break;
	}
}

void Player::update()
{
	//std::cout << "Handle Update" << std::endl;
	m_animated_sprite.update();

}

