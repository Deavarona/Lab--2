#ifndef CIRCLE_H
#define CIRCLE_H
#include "TwoDShape.h"
#include "Tools.h"

class Circle : public TwoDShape
{
private:
	double m_radius; //������
public:
	Circle(); //�����������
	void printInfo(); //����� ������ � ������
	double calculateRadius(); //������� �������
	double calculateArea(); //������� �������
};

void createCircle();
#endif CIRCLE_H