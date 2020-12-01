#ifndef RECTANGLE_H
#define RECTANGLE_H
#include "TwoDShape.h"
#include <iostream>

class Rectangle :public TwoDShape
{
private:
	//�������
	double m_length; //�����
	double m_width; //������

public:
	Rectangle(); //�����������
	void printInfo(); //����� ������ � ������

	double calculateLength(); //������� �����
	double calculateWidth(); //������� ������

	double calculateArea(); //������� �������
};

void createRectangle();
#endif RECTANGLE_H