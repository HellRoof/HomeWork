#include "Game.h"


Game::Game() : rWindow(sf::VideoMode(800, 600), "Snake...sss")
{

}

void Game::run()
{
	sf::Clock clock;
	sf::Time accumulator{ sf::Time::Zero };

	while (rWindow.isOpen())
	{
		processEvents();
		accumulator += clock.restart();
		while (accumulator > fixedTimeStep)
		{
			update(fixedTimeStep);
			accumulator -= fixedTimeStep;
		}
		render();
	}
}

void Game::processEvents()
{
	sf::Event event;
	while (rWindow.pollEvent(event))
	{
		switch (event.type)
		{
		case(sf::Event::KeyPressed):
			snake.handlePlayerInput(event.key.code, true);
			break;
		case(sf::Event::KeyReleased):
			snake.handlePlayerInput(event.key.code, false);
			break;
		case(sf::Event::Closed):
			rWindow.close();
			break;
		}
	}
}


void Game::update(sf::Time deltaTime)
{
	sf::Vector2f velocity(0.f, 0.f);
	if (snake.directions.mIsMovingUp)
		velocity.y -= snake.playerSpeed;
	if (snake.directions.mIsMovingDown)
		velocity.y += snake.playerSpeed;
	if (snake.directions.mIsMovingLeft)
		velocity.x -= snake.playerSpeed;
	if (snake.directions.mIsMovingRight)
		velocity.x += snake.playerSpeed;

	snake.mSpriteSnake.move(velocity * deltaTime.asSeconds());
}

void Game::render()
{
	rWindow.clear(sf::Color::Black);
	rWindow.draw(snake.mSpriteSnake);
	Field.field_Render(rWindow);
	rWindow.display();
}