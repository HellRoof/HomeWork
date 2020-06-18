#pragma once
#include <SFML/Graphics.hpp>

class Snake
{
	private:

		struct Directions
		{
			bool mIsMovingUp{ false };
			bool mIsMovingDown{ false };
			bool mIsMovingRight{ false };
			bool mIsMovingLeft{ false };
		};

		int length{3};
		//размер одного эллемента или размер одной картинки.

	public:
		sf::Sprite mSpriteSnake;
		sf::Texture mTextureSnake;
		Snake();

		Directions directions;
		void handlePlayerInput(sf::Keyboard::Key key, bool isPressed);
		float playerSpeed{100};
};