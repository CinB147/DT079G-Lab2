#include <iostream>
#include "shape.h"
#include "circle.h"
#include "rectangle.h"
#include "cylinder.h"
#include "RoundRectangle.h"
#include "parallelepiped.h"
#include <iostream>
#include <vector>
#include <memory>
#include <string>

/// <summary>
/// container that store the data of derived class from base bass
/// </summary>
/// <param name="shapes"> base class pointer </param>

void get_data(std::vector<shape*> shapes);

int main() {

	std::vector<shape*> myshapes(5, nullptr);
	
	myshapes[0] = new rectangle(4, 5, "baby blue");
	myshapes[1] = new roundedrectangle(rectangle(3, 2, "deep blue"), 1.5);
	myshapes[2] = new parallelepiped(rectangle(4, 2, "sky blue"), 1);
	myshapes[3] = new circle(2, "flame red");
	myshapes[4] = new cylinder(circle(2, "pastel pink"), 5);

	get_data(myshapes);

	return 0;
}


void get_data(std::vector<shape*> shapes) {
	double total_area = 0;

	for (auto& e : shapes) { 
		std::cout << e->get_name() <<" the area is " << e->get_area() << " unit of area. Colour is " << e->get_colour() << "\n";
		total_area += e->get_area();
	}

	std::cout << "Total area: " << total_area << "\n";
}