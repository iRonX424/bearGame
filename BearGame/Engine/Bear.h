#pragma once

#include "Graphics.h"

class Bear
{
public:
	
	int getX() const;
	int getY() const;
	void setX(int x);
	void setY(int y);
	void ClampScreenX();
	void  ClampScreenY();
	void draw(Graphics& gfx) const;
private:
	int x = 0;
	int y = 0;
	static constexpr int clampWidth = 42;
	static constexpr int clampHeight = 100;

	
};
