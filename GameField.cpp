#include "GameField.h"


GameField::GameField()
{
	mTextureGameField.loadFromFile("D:/Dev/GameSnakes/Snake.jpg");
	mSpriteGameField.setTexture(mTextureGameField);
	mSpriteGameField.setPosition(sf::Vector2f(30, 40));
}

void makeField()
{
    for (size_t i = 0; i < row; ++i)
    {
        std::vector<int> temp;
        for (size_t j = 0; j < col; ++j)
            temp.push_back(rand() % 666);
        mField.push_back(temp);
    }
}