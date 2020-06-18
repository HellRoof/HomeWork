#include "Snake.h"

void Snake::handlePlayerInput(sf::Keyboard::Key key, bool isPressed)
{
	if (key == sf::Keyboard::W)
		directions.mIsMovingUp = isPressed;
	else if (key == sf::Keyboard::S)
		directions.mIsMovingDown = isPressed;
	else if (key == sf::Keyboard::A)
		directions.mIsMovingLeft = isPressed;
	else if (key == sf::Keyboard::D)
		directions.mIsMovingRight = isPressed;
}

Snake::Snake()
{
	mTextureSnake.loadFromFile("D:/Dev/GameSnakes/Snake.jpg");
	mSpriteSnake.setTexture(mTextureSnake);
	mSpriteSnake.setPosition(sf::Vector2f(30, 40));
}