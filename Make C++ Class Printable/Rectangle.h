#pragma once
#include <iostream>

class Rectangle
{
public:
	Rectangle(int width, int height);
	int getWidth() const;
	int getHeight() const;
private:
	int mWidth;
	int mHeight;
};

