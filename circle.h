#ifndef CIRCLE_H
#define CIRCLE_H

#include "shape.h"
#include <iostream>


class circle : public shape {
public:
	//circle() = default;
	circle(double radius, std::string colour);
	double get_area() const override;
	double get_radius() const;
	std::string get_name() const;
private:
	double radius;
};

#endif // !CIRCLE_H