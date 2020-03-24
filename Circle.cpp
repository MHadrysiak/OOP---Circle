#include <math.h>
#include <iostream>

#include "Circle.h"

Circle::Circle() {
	radius 	= 1.0;
	color 	= "red";
}
Circle::Circle(double radius, std::string color){
	this->radius = radius;
	this->color = color;
}

double Circle::getRadius()	const{
	return radius;
}

double Circle::getArea()	const{
	return M_PI*radius*radius;
}
std::string Circle::getColor()	const{
	return	color;
}

Circle Circle::compareArea(const Circle & new_circle){
	if(this->getArea() >= new_circle.getArea()) return *this;
	else return new_circle;
}	

void Circle::setRadius(double radius){
	this->radius = radius;
}

void Circle::setColor(std::string color){
	this->color = color;
}
void Circle::Describe(){
	std::cout<<"This is a "<< getColor() <<" circle, with the radius of "<< getRadius() <<" and the area of "<< getArea() <<"\n";
}