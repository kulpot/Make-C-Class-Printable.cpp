#include "Rectangle.h"

Rectangle::Rectangle(int width, int height) {
	mWidth = width;
	mHeight = height;
}

int Rectangle::getWidth() const
{
	return mWidth;
}

int Rectangle::getHeight() const
{
	return mHeight;
}

std::ostream& operator<<(std::ostream& os, const Rectangle& rect) {
	os << "Rect(w: " << rect.getWidth() << ", h: " << rect.getHeight() << ")";
}