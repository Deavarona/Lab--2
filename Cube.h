#ifndef CUBE_H
#define CUBE_H
#include "ThreeDShape.h"
#include <iostream>

class Cube :public ThreeDShape
{
private:
	double m_edge; //�����
public:
	Cube(); //�����������
	void printInfo(); //����� ������ � ������

	double calculateEdge(); //������� �����
	double calculateVolume(); //������� ������
};

void createCube();
#endif CUBE_H