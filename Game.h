#pragma once
#include "Snake.h"
#include <iostream>
#include <SFML/Graphics.hpp>
#include "GameField.h"

class Game 
{
	private:
		sf::RenderWindow rWindow;
		const sf::Time fixedTimeStep{ sf::seconds(1.f / 60.f) };
		Snake snake;
		GameField Field;

	public:

		Game();
		void run();
		void update(sf::Time deltaTime);
		void render();
		void processEvents();


};
