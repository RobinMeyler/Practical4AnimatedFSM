#include <iostream>
#include <Player.h>
#include <Idle.h>
#include <Debug.h>
#include <SFML/Graphics.hpp>

Player::Player()
{
	m_animation.setCurrent(new Idle());
	m_animation.setPrevious(new Idle());

	sf::Texture texture;
	if (!texture.loadFromFile("assets\\grid.png")) {
		DEBUG_MSG("Failed to load file");
		//return EXIT_FAILURE;
	}
	animated_spriteIdle.setTexture(texture);
	animated_spriteJumping.setTexture(texture);
	doSetup();
	
}

Player::Player(const AnimatedSprite& s) : m_animated_sprite(s)
{
	m_animation.setCurrent(new Idle());
	m_animation.setPrevious(new Idle());

	sf::Texture texture;
	if (!texture.loadFromFile("assets\\grid.png")) {
		DEBUG_MSG("Failed to load file");
		//return EXIT_FAILURE;
	}
	animated_spriteIdle.setTexture(texture);
	animated_spriteJumping.setTexture(texture);
	doSetup();
}

Player::~Player() {}



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
		//std::cout << "Player Idling" << std::endl;
		m_animation.idle();
		m_animated_sprite = animated_spriteIdle;
		break;
	case Input::Action::UP:
		//std::cout << "Player Up" << std::endl;
		m_animation.climbing();
		break;
	case Input::Action::LEFT:
		//std::cout << "Player Left" << std::endl;
		m_animation.jumping();
		m_animated_sprite = animated_spriteJumping;
		break;
	case Input::Action::RIGHT:
		//std::cout << "Player Idling" << std::endl;
		m_animation.jumping();
		
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

void Player::doSetup()
{
	animated_spriteIdle.addFrame(sf::IntRect(3, 3, 84, 84));
	animated_spriteIdle.addFrame(sf::IntRect(88, 3, 84, 84));
	animated_spriteIdle.addFrame(sf::IntRect(173, 3, 84, 84));
	animated_spriteIdle.addFrame(sf::IntRect(258, 3, 84, 84));
	animated_spriteIdle.addFrame(sf::IntRect(343, 3, 84, 84));
	animated_spriteIdle.addFrame(sf::IntRect(428, 3, 84, 84));

	animated_spriteJumping.addFrame(sf::IntRect(3, 84 + 3, 84, 84));
	animated_spriteJumping.addFrame(sf::IntRect(88, 84 + 3, 84, 84));
	animated_spriteJumping.addFrame(sf::IntRect(173, 84 + 3, 84, 84));
	animated_spriteJumping.addFrame(sf::IntRect(258, 84 + 3, 84, 84));
	animated_spriteJumping.addFrame(sf::IntRect(343, 84 + 3, 84, 84));
	animated_spriteJumping.addFrame(sf::IntRect(428, 84 + 3, 84, 84));
}