#pragma once
#include <string>
class Vector2D
{
public:
	Vector2D(int x, int y);
	//~Vector2D

	int lenght() const;

	bool operator==(const Vector2D& rhs) const;
	bool operator!=(const Vector2D& rhs) const;

	bool operator<(const Vector2D& rhs) const;
	

	//the rest of the logical operators but using the ones on top
	bool operator>(const Vector2D& rhs) const;
	bool operator>=(const Vector2D& rhs) const;
	bool operator<=(const Vector2D& rhs) const;

	std::string toString() const;

private:
	int _x;
	int _y;
};

