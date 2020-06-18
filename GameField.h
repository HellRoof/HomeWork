#pragma once
#include <vector>
#include <SFML/Graphics.hpp>

class GameField
{
	private:
		
	public:
		GameField();
		sf::Sprite mSpriteGameField;
		sf::Texture mTextureGameField;
		std::vector<std::vector<int>> mField;
		void makeField(std::vector<std::vector<int>> field);
};