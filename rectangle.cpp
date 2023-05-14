#include "rectangle.h"

rectangle::rectangle(double width, double height, std::string colour) : width(width), height(height), shape(colour) {

}

double rectangle::get_width() const {
	return width;
}

double rectangle::get_height() const {
	return height;
}

double rectangle::get_area() const {
	return width * height;
}

std::string rectangle::get_name() const {
	return typeid(*this).name();
}