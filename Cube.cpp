#include "Cube.h"

Cube::Cube()
{
	m_edge = calculateEdge();
	m_volume = calculateVolume();
}

double Cube::calculateEdge()
{
	//Сумма квадратов трех координат равна квадрату диагонали

	//Нахождение квадрата разности координат х
	double x_number = m_x_center - m_x_point;
	x_number *= x_number;

	//Нахождение квадрата разности координат у
	double y_number = m_y_center - m_y_point;
	y_number *= y_number;

	//Нахождение квадрата разности координат z
	double z_number = m_z_center - m_z_point;
	z_number *= z_number;

	//Диагональ
	double half_diagonal = sqrt(x_number + y_number + z_number);
	double edge = half_diagonal * sqrt(2);
	return edge;
}

double Cube::calculateVolume()
{
	return m_edge * m_edge * m_edge;
}

void Cube::printInfo()
{
	std::cout << std::endl;
	std::cout << "Figure: Cube" << std::endl;
	std::cout << "Center: (" << m_x_center << ";" << m_y_center << ";" << m_z_center << ")" << std::endl;
	std::cout << "Point: (" << m_x_point << ";" << m_y_point << ";" << m_z_point << ")" << std::endl;
	std::cout << "Edge: " << m_edge << std::endl;
	std::cout << "Volume: " << m_volume << std::endl;
	std::cout << std::endl;
	std::cout << std::endl;
}

void createCube()
{
	Cube cube;
	cube.printInfo();
}