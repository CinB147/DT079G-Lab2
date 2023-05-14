#include "RoundRectangle.h"
#include <numbers>
#include <cmath>

roundedrectangle::roundedrectangle(rectangle rectangle, double circle_radius): rectangle(rectangle), circle_radius(circle_radius) {

}

double roundedrectangle::get_c_radius() const {
	return circle_radius;
}

double roundedrectangle::get_area() const {
	return rectangle::get_area() - pow(circle_radius, 2) * (4 - std::numbers::pi); // bh - r^2 * (4-pi) = bh - 4*r^2/4
}

std::string roundedrectangle::get_name() const {
	return typeid(*this).name();
}

