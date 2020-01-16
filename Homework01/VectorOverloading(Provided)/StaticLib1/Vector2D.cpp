#include "Vector2D.h"
#include <sstream>
#include <cmath>

Vector2D::Vector2D(int x, int y) : _x(x), _y(y)
{}

std::string Vector2D::toString() const
{
	std::stringstream ss;

	ss << "(" << _x << ", " << _y << ")";
	return ss.str();
}

double Vector2D::length() const {
	return sqrt(_x * _x + _y * _y);
}


bool AlmostEqualRelative(double A, double B,
    double maxRelDiff = std::numeric_limits<double>::epsilon())
{
    // Calculate the difference.
    double diff = fabs(A - B);
    A = fabs(A);
    B = fabs(B);
    // Find the largest
    double largest = (B > A) ? B : A;

    if (diff <= largest * maxRelDiff)
        return true;
    return false;
}


bool Vector2D::operator==(const Vector2D& rhs) const {
	//double epsilon = 1E-5;
    return (AlmostEqualRelative(length(), rhs.length()));
}

bool Vector2D::operator!=(const Vector2D& rhs) const {
	return !((*this) == rhs);
}

bool Vector2D::operator<(const Vector2D& rhs) const
{
	return (this->length() < rhs.length());
}

bool Vector2D::operator>(const Vector2D& rhs) const
{
	return (!(this->length() < rhs.length()));
}

bool Vector2D::operator<=(const Vector2D& rhs) const
{
	return (*this < rhs || *this == rhs);
}

bool Vector2D::operator>=(const Vector2D& rhs) const
{
	return (!(this->length() <= rhs.length()));
}

std::ostream& operator<<(std::ostream& os, const Vector2D& rhs)
{
	os << "(" << rhs._x << ", " << rhs._y << ")";
	return os;
}

std::istream& operator>>(std::istream& is, Vector2D& rhs)
{
	char L;
	is >> L >> rhs._x >> L >> rhs._y >> L;
	return is;
}

Vector2D Vector2D::operator+(const Vector2D& rhs) const
{
	return Vector2D(_x+rhs._x, _y+rhs._y);
}

Vector2D& Vector2D::operator+=(const Vector2D& rhs)
{
	_x += rhs._x;
	_y += rhs._y;
	return *this;
}

Vector2D Vector2D::operator-(const Vector2D& rhs) const
{
	return Vector2D(_x + rhs._x, _y + rhs._y);
}

Vector2D& Vector2D::operator-=(const Vector2D& rhs)
{
	_x -= rhs._x;
	_y -= rhs._y;
	return *this;
}

Vector2D& Vector2D::operator++()
{
	++_x;
	++_y;
	return *this;
}

Vector2D Vector2D::operator++(int)
{
	Vector2D result(*this);
	_x++;
	_y++;
	return result;
}
