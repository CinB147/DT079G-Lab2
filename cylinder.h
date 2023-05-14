#ifndef CYLINDER_H
#define CYLINDER_H

#include "circle.h"

class cylinder : public circle{
public:
	//cylinder() = default;
	cylinder(circle circle, double height);
	double get_height() const;
	double get_area() const override;
	std::string get_name() const;

private:
	double height;
};

#endif // !CYLINDER_H

