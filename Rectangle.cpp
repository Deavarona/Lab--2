#include "Rectangle.h"

Rectangle::Rectangle()
{
	m_length = calculateLength();
	m_width = calculateWidth();
	m_area = calculateArea();
}

double Rectangle::calculateLength()
{
	return 2 * fabs(m_x_center - m_x_point);
}

double Rectangle::calculateWidth()
{
	return 2 * fabs(m_y_center - m_y_point);
}

double Rectangle::calculateArea()
{
	return m_length * m_width;
}

void Rectangle::printInfo()
{
	std::cout << std::endl;
	std::cout << "Figure: rectangle" << std::endl;
	std::cout << "Center: (" << m_x_center << ";" << m_y_center << ")" << std::endl;
	std::cout << "Point: (" << m_x_point << ";" << m_y_point << ")" << std::endl;
	std::cout << "Length: " << m_length << std::endl;
	std::cout << "Width: " << m_width << std::endl;
	std::cout << "Area: " << m_area << std::endl;
	std::cout << "Volume: 0" << std::endl;
	std::cout << std::endl;
	std::cout << std::endl;
}

void createRectangle()
{
	Rectangle rectangle;
	rectangle.printInfo();
}