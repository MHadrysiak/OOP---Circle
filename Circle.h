//Created by Michał Hadrysiak
#ifndef CIRCLE_H
#define CIRCLE_H

#include <string>

class Circle {
public:
	double getRadius()		const;
	double getArea()		const;
	std::string getColor()	const;
	Circle();
	Circle(double radius, std::string color);
	Circle compareArea(const Circle & new_circle);

	void setRadius(double radius);
	void setColor(std::string color);
	void Describe();


private:
	double radius;
	std::string color;
};
#endif