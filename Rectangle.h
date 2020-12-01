#ifndef RECTANGLE_H
#define RECTANGLE_H
#include "TwoDShape.h"
#include <iostream>

class Rectangle :public TwoDShape
{
private:
	//Стороны
	double m_length; //Длина
	double m_width; //Ширина

public:
	Rectangle(); //Конструктор
	void printInfo(); //Вывод данных о фигуре

	double calculateLength(); //Подсчет длины
	double calculateWidth(); //Подсчет ширины

	double calculateArea(); //Подсчет площади
};

void createRectangle();
#endif RECTANGLE_H