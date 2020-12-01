#ifndef ISHAPE_H
#define ISHAPE_H
class IShape
{
protected:
	virtual void printInfo() = 0; //����� ������ � ������

	//��������� �������� ��������� ������ ������
	virtual void setXCenter(double) = 0;
	virtual void setYCenter(double) = 0;
	virtual void setZCenter(double) = 0;

	//��������� �������� ��������� ������������ �����
	virtual void setXPoint(double) = 0;
	virtual void setYPoint(double) = 0;
	virtual void setZPoint(double) = 0;
};

#endif ISHAPE_H