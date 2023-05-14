#ifndef ROUNDRECTANGLE_H
#define ROUNDRECTANGLE_H

#include "rectangle.h"

class roundedrectangle : public rectangle {
public:
	//roundedrectangle() = default;
	roundedrectangle(rectangle rectangle, double circle_radius);
	double get_c_radius() const;
	double get_area() const override;
	std::string get_name() const;

private:
	double circle_radius;
};

#endif // !ROUNDRECTANGLE_H

