#pragma once
#include <vector>
#include <SFML/Graphics.hpp>

class GameField
{
	enum State { EMPTY = 0, SNAKE, FLY, WALL };

	private:
		int const m_width{50};
		int const m_height{20};
		std::vector<std::vector<State>> mainField{m_height, std::vector<State>(m_width)};
	public:
		GameField();
		sf::Sprite mSpriteGameField_Wall;
		sf::Texture mTextureGameField_Stone;
		void make_Field();
		void make_Wall();
		void field_Render(sf::RenderWindow& window);

		void setFieldCord(int height, int width, State second_State)
		{
			mainField[height][width] = second_State;
		}

		std::vector<std::vector<State>> getFieldCord()
		{
			return mainField;
		}
};