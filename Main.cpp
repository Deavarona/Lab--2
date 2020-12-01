//По заданию TwoDShape и ThreeDShape абстрактные!
//Иначе area и volume могут быть объявлены в IShape

//По заданию IShape - интерфейс!
//Иначе методы-сеттеры могут быть определены в IShape

#include <iostream>
#include "Tools.h"
#include "IShape.h"
#include "TwoDShape.h"
#include "ThreeDShape.h"
#include "Circle.h"
#include "Rectangle.h"
#include "Sphere.h"
#include "Cube.h"
#include <conio.h>

int main()
{
	std::cout << "1. Circle" << std::endl;
	std::cout << "2. Rectangle" << std::endl;
	std::cout << "3. Sphere" << std::endl;
	std::cout << "4. Cube" << std::endl;

	switch (_getch())
	{
	case '1': createCircle(); break;
	case '2': createRectangle(); break;
	case '3': createSphere(); break;
	case '4': createCube(); break;
	}
}