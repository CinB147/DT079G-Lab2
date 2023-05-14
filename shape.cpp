#include "shape.h"


shape::shape(std::string colour) : colour(colour) {

}

std::string shape::get_colour() const{
	return colour;
}