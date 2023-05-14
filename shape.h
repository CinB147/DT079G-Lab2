#pragma once
#ifndef SHAPE_H
#define SHAPE_H
#include <string>


//abstract base class : class that is used as a blueprint for other classes
//parent/Super class
class shape
{
public:
	//shape() = default;
	shape(std::string colour);
	std::string get_colour() const;
	virtual double get_area() const = 0; //do nothing functions, function that does not perform any task
	virtual std::string get_name() const = 0;

private:
	std::string colour;
};

#endif // !1


