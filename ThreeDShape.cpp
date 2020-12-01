#include "ThreeDShape.h"

ThreeDShape::ThreeDShape()
{
	createCenter();
	createCoordinates();
}

void ThreeDShape::createCenter()
{
	//Координата х центра
	std::cout << "X (center) = ";
	double x_center = inputNumber();
	setXCenter(x_center);

	//Координата у центра
	std::cout << "Y (center) = ";
	double y_center = inputNumber();
	setYCenter(y_center);

	//Координата z центра
	std::cout << "Z (center) = ";
	double z_center = inputNumber();
	setZCenter(z_center);
}

void ThreeDShape::createCoordinates()
{
	//Координата х произвольной точки
	std::cout << "X (point) = ";
	double x_coordinate = inputNumber();
	setXPoint(x_coordinate);

	//Координата у произвольной точки
	std::cout << "Y (point) = ";
	double y_coordinate = inputNumber();
	setYPoint(y_coordinate);

	//Координата z произвольной точки
	std::cout << "Z (point) = ";
	double z_coordinate = inputNumber();
	setZPoint(z_coordinate);

}

void ThreeDShape::setXCenter(double x_center = UNDEFINED_VALUE)
{
	m_x_center = x_center;
}

void ThreeDShape::setYCenter(double y_center = UNDEFINED_VALUE)
{
	m_y_center = y_center;
}

void ThreeDShape::setZCenter(double z_center = UNDEFINED_VALUE)
{
	m_z_center = z_center;
}

void ThreeDShape::setXPoint(double x_coordinate = UNDEFINED_VALUE)
{
	m_x_point = x_coordinate;
}

void ThreeDShape::setYPoint(double y_coordinate = UNDEFINED_VALUE)
{
	m_y_point = y_coordinate;
}

void ThreeDShape::setZPoint(double z_coordinate = UNDEFINED_VALUE)
{
	m_z_point = z_coordinate;
}