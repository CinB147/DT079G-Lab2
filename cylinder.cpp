#include "cylinder.h"
#include <numbers>


cylinder::cylinder(circle circle, double height) : circle(circle), height(height) {

}

double cylinder::get_height() const {
	return height;
}

double cylinder::get_area() const {
	return 2*(std::numbers::pi * circle::get_radius() * height + circle::get_area());
}

std::string cylinder::get_name() const {
	return typeid(*this).name();
}