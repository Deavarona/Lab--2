#include "Sphere.h"
#include "Tools.h"

Sphere::Sphere()
{
	m_radius = calculateRadius();
	m_volume = calculateVolume();
}

double Sphere::calculateRadius()
{
	//Сумма квадратов трех координат равна квадрату радиуса

	//Нахождение квадрата разности координат х
	double x_number = m_x_center - m_x_point;
	x_number *= x_number;

	//Нахождение квадрата разности координат у
	double y_number = m_y_center - m_y_point;
	y_number *= y_number;

	//Нахождение квадрата разности координат z
	double z_number = m_z_center - m_z_point;
	z_number *= z_number;

	//Радиус
	double radius = sqrt(x_number + y_number + z_number);
	return radius;
}

double Sphere::calculateVolume()
{
	return 4 / 3 * PI * m_radius * m_radius * m_radius;
}

void Sphere::printInfo()
{
	std::cout << std::endl;
	std::cout << "Figure: Sphere" << std::endl;
	std::cout << "Center: (" << m_x_center << ";" << m_y_center << ";" << m_z_center << ")" << std::endl;
	std::cout << "Point: (" << m_x_point << ";" << m_y_point << ";" << m_z_point << ")" << std::endl;
	std::cout << "Radius: " << m_radius << std::endl;
	std::cout << "Volume: " << m_volume << std::endl;
	std::cout << std::endl;
	std::cout << std::endl;
}

void createSphere()
{
	Sphere sphere;
	sphere.printInfo();
}