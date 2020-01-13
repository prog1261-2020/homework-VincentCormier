#include "Vector2D.h"
#include <sstream>
#include <cmath>

Vector2D::Vector2D(int x, int y): _x(x), _y(y)
{
}

std::string Vector2D::toString() const
{
	std::stringstream ss;
	ss << "(" << _x << ", " << _y << ")";
	return ss.str();
}

int Vector2D::lenght() const
{
	return (sqrt(pow(_x, 2) + pow(_y, 2)));
}

bool Vector2D::operator==(const Vector2D& rhs) const {
	return (rhs.lenght() == this->lenght());
}

bool Vector2D::operator!=(const Vector2D& rhs) const {
	return !((*this) == rhs);
}

bool Vector2D::operator<(const Vector2D& rhs) const
{
	return (this->lenght() < rhs.lenght());
}

bool Vector2D::operator>(const Vector2D& rhs) const
{
	return !((this->lenght()) < rhs.lenght());
}

bool Vector2D::operator>=(const Vector2D& rhs) const
{
	return (!(this->lenght() < rhs.lenght()) || (this->lenght() == rhs.lenght()) );
}

bool Vector2D::operator<=(const Vector2D& rhs) const
{
	return !(this->lenght() >= rhs.lenght());
}
