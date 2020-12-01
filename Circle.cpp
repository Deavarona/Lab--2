#include "Circle.h"

Circle::Circle()
{
	m_radius = calculateRadius();
	m_area = calculateArea();
}

double Circle::calculateRadius()
{
	//Радиус вычисляется по теореме Пифагора, где катеты - разность координат х и разность координат у

	//Нахождение квадрата разности координат х
	double x_number = m_x_center - m_x_point;
	x_number *= x_number;

	//Нахождение квадрата разности координат у
	double y_number = m_y_center - m_y_point;
	y_number *= y_number;

	//Радиус
	double radius = sqrt(x_number + y_number);
	return radius;
}

double Circle::calculateArea()
{
	return PI * m_radius * m_radius;
}

void Circle::printInfo()
{
	std::cout << std::endl;
	std::cout << "Figure: circle" << std::endl;
	std::cout << "Center: (" << m_x_center << ";" << m_y_center << ")" << std::endl;
	std::cout << "Point: (" << m_x_point << ";" << m_y_point << ")" << std::endl;
	std::cout << "Radius: " << m_radius << std::endl;
	std::cout << "Area: " << m_area << std::endl;
	std::cout << "Volume: 0" << std::endl;
	std::cout << std::endl;
	std::cout << std::endl;
}

void createCircle()
{
	Circle circle;
	circle.printInfo();
}