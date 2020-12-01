//#pragma once
#ifndef SPHERE_H
#define SPHERE_H
#include "ThreeDShape.h"

class Sphere :public ThreeDShape
{
private:
	double m_radius;
public:
	Sphere(); //Конструктор
	void printInfo(); //Вывод данных о фигуре
	double calculateRadius(); //Подсчет радиуса
	double calculateVolume(); //Подсчет площади
};

void createSphere();
#endif SPHERE_H