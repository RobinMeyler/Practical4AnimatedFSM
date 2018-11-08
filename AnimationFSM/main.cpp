#include <iostream>
#include <SFML/Graphics.hpp>
#include <AnimatedSprite.h>
#include <Player.h>
#include <Input.h>
#include <Debug.h>

using namespace std;

int main()
{
	// Create the main window
	sf::RenderWindow window(sf::VideoMode(800, 600), "SFML window");

	// Load a sprite to display
	//sf::Texture texture;
	//if (!texture.loadFromFile("assets\\grid.png")) {
	//	DEBUG_MSG("Failed to load file");
	//	//return EXIT_FAILURE;
	//}

	// Setup Players Default Animated Sprite
	/*AnimatedSprite animated_spriteIdle(texture);
	AnimatedSprite animated_spriteJumping(texture);

	animated_spriteIdle.addFrame(sf::IntRect(3, 3, 84, 84));
	animated_spriteIdle.addFrame(sf::IntRect(88, 3, 84, 84));
	animated_spriteIdle.addFrame(sf::IntRect(173, 3, 84, 84));
	animated_spriteIdle.addFrame(sf::IntRect(258, 3, 84, 84));
	animated_spriteIdle.addFrame(sf::IntRect(343, 3, 84, 84));
	animated_spriteIdle.addFrame(sf::IntRect(428, 3, 84, 84));

	animated_spriteJumping.addFrame(sf::IntRect(3, 84+3, 84, 84));
	animated_spriteJumping.addFrame(sf::IntRect(88, 84 + 3, 84, 84));
	animated_spriteJumping.addFrame(sf::IntRect(173, 84 + 3, 84, 84));
	animated_spriteJumping.addFrame(sf::IntRect(258, 84 + 3, 84, 84));
	animated_spriteJumping.addFrame(sf::IntRect(343, 84 + 3, 84, 84));
	animated_spriteJumping.addFrame(sf::IntRect(428, 84 + 3, 84, 84));*/
	// Setup the Player

	Player player(animated_spriteIdle);
	Input input;

	

//	temp.clear();
	
	// Start the game loop
	while (window.isOpen())
	{
		// Process events
		sf::Event event;
		while (window.pollEvent(event))
		{
			switch (event.type)
			{
			case sf::Event::Closed:
				// Close window : exit
				window.close();
				break;
			case sf::Event::KeyPressed:
				if (sf::Keyboard::isKeyPressed(sf::Keyboard::Left))
				{
					input.setCurrent(Input::Action::LEFT);
					player.setAnimation(animated_spriteIdle);
				}
				else if (sf::Keyboard::isKeyPressed(sf::Keyboard::Right))
				{
					input.setCurrent(Input::Action::RIGHT);
					player.setAnimation(animated_spriteJumping);
				}
				else if (sf::Keyboard::isKeyPressed(sf::Keyboard::Up))
				{
					input.setCurrent(Input::Action::UP);
				}
				break;
			}
		}

		// Handle input to Player
		player.handleInput(input);

		// Update the Player
		player.update();

		// Clear screen
		window.clear();

		// Draw the Players Current Animated Sprite
		window.draw(player.getAnimatedSprite());

		// Update the window
		window.display();
	}

	return 0;
};