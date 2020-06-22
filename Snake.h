#pragma once
#include <vector>
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

		std::vector<int> length{1};
		//размер одного эллемента или размер одной картинки.

	public:
		sf::Sprite mSpriteSnake;
		sf::Texture mTextureSnake;
		Snake();

		Directions directions;
		void handlePlayerInput(sf::Keyboard::Key key, bool isPressed);
		float playerSpeed{100};
};