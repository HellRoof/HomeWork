#include "GameField.h"
#include <iostream>

GameField::GameField()
{
    mTextureGameField_Stone.loadFromFile("D:/Dev/GameSnakes/Stone.jpg");
    mSpriteGameField_Wall.setTexture(mTextureGameField_Stone);
}

void GameField::field_Render(sf::RenderWindow& window)
{
    for (int i = 0; i < m_height; ++i)
    {
        for (int j = 0; j < m_width; ++j)
        {
            if (mainField[i][j] == WALL)
            {
                mSpriteGameField_Wall.setPosition(sf::Vector2f(i * 50, j * 50));
                window.draw(mSpriteGameField_Wall);
            }
        }
        std::cout << std::endl;
    }
}

void GameField::make_Wall()
{    //Set Top and Bottom Wall
    for (int i = 0; i < m_width; ++i)
    {
        setFieldCord(0, i, WALL);
        setFieldCord(m_height-1, i, WALL);
    }
     //Set Left and Right Wall
    for (int j = 0; j < m_height; ++j)
    {
        setFieldCord(j, 0, WALL);
        setFieldCord(j, m_width-1, WALL);
    }
}

void GameField::make_Field()
{
    
    for (int i = 0; i < m_height; i++)
    {
        for (int j = 0; j < m_width; j++)
        {
            std::cout << mainField[i][j];
        }
        std::cout << std::endl;
    }
}