//#pragma once
#ifndef SPHERE_H
#define SPHERE_H
#include "ThreeDShape.h"

class Sphere :public ThreeDShape
{
private:
	double m_radius;
public:
	Sphere(); //�����������
	void printInfo(); //����� ������ � ������
	double calculateRadius(); //������� �������
	double calculateVolume(); //������� �������
};

void createSphere();
#endif SPHERE_H