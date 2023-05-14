#ifndef RECTANGLE_H
#define RECTANGLE_H

#include "shape.h"
#include <iostream>

//subclass
//derived class
class rectangle : public shape {
public:
	//rectangle() = default;
	rectangle(double width, double height, std::string colour);
	double get_width() const;
	double get_height() const;

	/// <summary>
	/// overrride will invoking parent class shape get_area() and 
	/// </summary>
	/// <returns></returns>
	double get_area() const override;
	std::string get_name() const;

private:
	double width;
	double height;
	std::string name;
};

#endif // !RECTANGLE_H

