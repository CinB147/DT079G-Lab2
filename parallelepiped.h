#ifndef PARALLELEPIPED_H
#define PARALLELEPIPED_H
#include "rectangle.h"

class parallelepiped : public rectangle
{
public:
	//parallelepiped() = default;
	
	/// <summary>
	/// construct with parameters
	/// </summary>
	/// <param name="rectangle"> object rectangle </param>
	/// <param name="depth"> depth of parallelepiped  </param>
	parallelepiped(rectangle rectangle, double depth);

	/// <summary>
	/// get dept value
	/// </summary>
	/// <returns> protected object of parallelepiped </returns>
	double get_depth() const;
	double get_area() const override;
	std::string get_name() const;
private:
	double depth;
};

#endif // !PARALLELEPIPED_H

