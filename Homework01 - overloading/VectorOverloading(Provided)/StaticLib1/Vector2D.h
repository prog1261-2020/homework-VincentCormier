//
#pragma once
#include <string>

class Vector2D {
public:
	Vector2D(int x, int y);

	double length() const;

	bool operator==(const Vector2D& rhs) const;
	bool operator!=(const Vector2D& rhs) const;

	bool operator <(const Vector2D& rhs) const;
	bool operator >(const Vector2D& rhs) const;

	bool operator <=(const Vector2D& rhs) const;
	bool operator >=(const Vector2D& rhs) const;

	Vector2D operator +(const Vector2D& rhs) const;
	Vector2D& operator +=(const Vector2D& rhs);
	Vector2D operator -(const Vector2D& rhs) const;
	Vector2D& operator -=(const Vector2D& rhs) ;
	Vector2D& operator ++();
	Vector2D operator ++(int);

	std::string toString() const;

	friend std::ostream& operator <<(std::ostream&, const Vector2D&);
	friend std::istream& operator >>(std::istream&, Vector2D&);

private:
	int _x;
	int _y;
};

std::ostream& operator <<(std::ostream&, const Vector2D&);

std::istream& operator >>(std::istream&, Vector2D&);