#include "circle.h"
#include <numbers>

circle::circle(double radius, std::string colour): radius(radius), shape(colour) {

}


double circle::get_area() const {
	return std::numbers::pi * pow(radius, 2);
}

std::string circle::get_name() const {
	return typeid(*this).name();
}

double circle::get_radius() const {
	return radius;
}
