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

void Player::handleInput()
{
	DEBUG_MSG("Handle Input");

	if (m_animated_sprite.getTextureRect().top == 85 * 0 + 3)			// TextureRec positions
	{
		m_animation.idle();
	}
	if (m_animated_sprite.getTextureRect().top == 85 * 1 + 3)
	{
		m_animation.jumping();
	}
	if (m_animated_sprite.getTextureRect().top == 85 * 2 + 3)
	{
		m_animation.climbing();
	}
	if (m_animated_sprite.getTextureRect().top == 85 * 3 + 3)
	{
		m_animation.hammering();
	}
	if (m_animated_sprite.getTextureRect().top == 85 * 4 + 3)
	{
		m_animation.shoveling();
	}
	if (m_animated_sprite.getTextureRect().top == 85 * 5 + 3)
	{
		m_animation.swordmanShip();
	}
}

void Player::update()
{
	m_animated_sprite.update();
}

