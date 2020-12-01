#ifndef THREEDSHAPE_H
#define THREEDSHAPE_H
#include "IShape.h"
#include "Tools.h"

class ThreeDShape : public IShape
{
protected:
	//Координаты центра
	double m_x_center;
	double m_y_center;
	double m_z_center;

	//Координаты произвольной точки
	double m_x_point;
	double m_y_point;
	double m_z_point;

	//Объем
	double m_volume;
public:
	ThreeDShape(); //Конструктор
	void createCenter(); //Определение координат центра
	void createCoordinates(); //Определение координат произвольной точки

	//Установка значений координат центра
	void setXCenter(double);
	void setYCenter(double);
	void setZCenter(double);

	//Установка значений координат произвольной точки
	void setXPoint(double);
	void setYPoint(double);
	void setZPoint(double);

	virtual double calculateVolume() = 0; //Подсчет площади
};

#endif THREEDSHAPE_H