#include "parallelepiped.h"

parallelepiped::parallelepiped(rectangle rectangle, double depth)
	: rectangle(rectangle), depth(depth) {

}

double parallelepiped::get_depth() const {
	return depth;
}

double parallelepiped::get_area() const {
	return 2*(rectangle::get_area() + rectangle::get_width()*depth + rectangle::get_height()*depth);
}

std::string parallelepiped::get_name() const {
	return typeid(*this).name();
}
