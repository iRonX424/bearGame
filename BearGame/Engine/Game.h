/****************************************************************************************** 
 *	Chili DirectX Framework Version 16.07.20											  *	
 *	Game.h																				  *
 *	Copyright 2016 PlanetChili.net <http://www.planetchili.net>							  *
 *																						  *
 *	This file is part of The Chili DirectX Framework.									  *
 *																						  *
 *	The Chili DirectX Framework is free software: you can redistribute it and/or modify	  *
 *	it under the terms of the GNU General Public License as published by				  *
 *	the Free Software Foundation, either version 3 of the License, or					  *
 *	(at your option) any later version.													  *
 *																						  *
 *	The Chili DirectX Framework is distributed in the hope that it will be useful,		  *
 *	but WITHOUT ANY WARRANTY; without even the implied warranty of						  *
 *	MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the						  *
 *	GNU General Public License for more details.										  *
 *																						  *
 *	You should have received a copy of the GNU General Public License					  *
 *	along with The Chili DirectX Framework.  If not, see <http://www.gnu.org/licenses/>.  *
 ******************************************************************************************/
#pragma once

#include "Keyboard.h"
#include "Mouse.h"
#include "Graphics.h"
#include "Bear.h"
#include <random>

class Game
{
public:
	Game( class MainWindow& wnd );
	Game( const Game& ) = delete;
	Game& operator=( const Game& ) = delete;
	void Go();

	/*std::random_device rd;
	std::mt19937 rng;
	std::uniform_int_distribution<int> xDist;
	std::uniform_int_distribution<int> yDist;
	std::uniform_int_distribution<int> startDir;*/
	

private:
	void ComposeFrame();
	void UpdateModel();
	/********************************/
	/*  User Functions              */
	void DrawBox( int x,int y,int r,int g,int b );
	bool OverlapTest( int box0x,int box0y,int box1x,int box1y );
	
	int ClampScreenX(int x, int clampWidth);
	int ClampScreenY(int y, int clampHeight);
	//for the poo game
	void initialize();
	void drawPoo(int x[],int y[]);
	void drawFace(int x,int y);
	void drawPanda(int x, int y);
	void drawBear(int x, int y);
	void drawPizza(int x[], int y[]);
	void gameOver(int x,int y);
	void title(int x, int y);

	void titleGif1(int x,int y);
	void titleGif2(int x, int y);
	void tasuketeKure(int x,int y);
	
	bool isColliding (int xP,int yP,int widthP,int heightP,
					  int xZ,int yZ,int widthZ,int heightZ);
	void DrawRect();
	void drawBar();
	void winScreen(int x,int y);
	/********************************/
private:
	MainWindow& wnd;
	Graphics gfx;
	/********************************/
	/*  User Variables              */
	
	

	

	//for the poo
	int faceX=0;
	int faceY = 0;
	/*int bearX=0;
	int bearY = 0;*/
	
	Bear bear;

	static constexpr int numPizza = 10;

	static constexpr int acceleration = 100;
	static constexpr int speed = 2;
	int pizzaX[numPizza];
	int pizzaY[numPizza];
	
	bool isStarted = false;
	bool isGameOver = false;
	bool won = false;

	int pizzaXvel[numPizza];
	int pizzaYvel[numPizza];
	bool pizzaIsEaten[numPizza];
	
	//for the box
	int x0, y0;
	int boxWidth, boxHeight;
	int bW = 100, bH = 100;
	bool isBoxTouched=false;
	Color c;
	int rectColorIndex;

	//for bar 
	int barX0, barY0;
	int barWidth, barHeight;
	bool enableBar;

	unsigned long int gifTimer = 0;
	/*int clampWidth = 42;
	int clampHeight = 100;*/
	/********************************/
};