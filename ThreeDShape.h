#ifndef THREEDSHAPE_H
#define THREEDSHAPE_H
#include "IShape.h"
#include "Tools.h"

class ThreeDShape : public IShape
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

	//�����
	double m_volume;
public:
	ThreeDShape(); //�����������
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

	virtual double calculateVolume() = 0; //������� �������
};

#endif THREEDSHAPE_H