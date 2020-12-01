#ifndef CIRCLE_H
#define CIRCLE_H
#include "TwoDShape.h"
#include "Tools.h"

class Circle : public TwoDShape
{
private:
	double m_radius; //Радиус
public:
	Circle(); //Конструктор
	void printInfo(); //Вывод данных о фигуре
	double calculateRadius(); //Подсчет радиуса
	double calculateArea(); //Подсчет площади
};

void createCircle();
#endif CIRCLE_H