#ifndef TWODSHAPE_H
#define TWODSHAPE_H
#include "IShape.h"
#include "Tools.h"

class TwoDShape : public IShape
{
protected:
	//���������� ������
	double m_x_center;
	double m_y_center;
	double m_z_center;

	//���������� ������������ �����
	double m_x_point;
	double m_y_point;
	double m_z_point;

	//�������
	double m_area;
public:
	TwoDShape(); //�����������
	void createCenter(); //����������� ��������� ������
	void createCoordinates(); //����������� ��������� ������������ �����

	//��������� �������� ��������� ������
	void setXCenter(double);
	void setYCenter(double);
	void setZCenter(double);

	//��������� �������� ��������� ������������ �����
	void setXPoint(double);
	void setYPoint(double);
	void setZPoint(double);

	virtual double calculateArea() = 0; //������� �������
};

#endif TWODSHAPE_H