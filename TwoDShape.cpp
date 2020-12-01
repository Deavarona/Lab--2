#include "TwoDShape.h"

TwoDShape::TwoDShape()
{
	createCenter();
	createCoordinates();
}

void TwoDShape::createCenter()
{
	//���������� � ������
	std::cout << "X (center) = ";
	double x_center = inputNumber();
	setXCenter(x_center);

	//���������� � ������
	std::cout << "Y (center) = ";
	double y_center = inputNumber();
	setYCenter(y_center);

	//���������� z ������ - �� 2D ��������� ����� 0
	setZCenter(UNDEFINED_VALUE);
}

void TwoDShape::createCoordinates()
{
	//���������� � ������������ �����
	std::cout << "X (point) = ";
	double x_coordinate = inputNumber();
	setXPoint(x_coordinate);

	//���������� � ������������ �����
	std::cout << "Y (point) = ";
	double y_coordinate = inputNumber();
	setYPoint(y_coordinate);

	//���������� z ������������ ����� - �� 2D ��������� ����� 0
	setZPoint(UNDEFINED_VALUE);
}

void TwoDShape::setXCenter(double x_center = UNDEFINED_VALUE)
{
	m_x_center = x_center;
}

void TwoDShape::setYCenter(double y_center = UNDEFINED_VALUE)
{
	m_y_center = y_center;
}

void TwoDShape::setZCenter(double z_center = UNDEFINED_VALUE)
{
	m_z_center = z_center;
}

void TwoDShape::setXPoint(double x_coordinate = UNDEFINED_VALUE)
{
	m_x_point = x_coordinate;
}

void TwoDShape::setYPoint(double y_coordinate = UNDEFINED_VALUE)
{
	m_y_point = y_coordinate;
}

void TwoDShape::setZPoint(double z_coordinate = UNDEFINED_VALUE)
{
	m_z_point = z_coordinate;
}