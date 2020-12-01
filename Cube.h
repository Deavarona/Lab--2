#ifndef CUBE_H
#define CUBE_H
#include "ThreeDShape.h"
#include <iostream>

class Cube :public ThreeDShape
{
private:
	double m_edge; //Ребро
public:
	Cube(); //Конструктор
	void printInfo(); //Вывод данных о фигуре

	double calculateEdge(); //Подсчет длины
	double calculateVolume(); //Подсчет объема
};

void createCube();
#endif CUBE_H