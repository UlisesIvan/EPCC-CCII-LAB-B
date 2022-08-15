// LAB20.cpp : Este archivo contiene la función "main". La ejecución del programa comienza y termina ahí.
//

#include <iostream>

class Point {
public:
	Point(double, double);
	~Point() {}
	void X(double xx) {
		a = xx;
	}
	void Y(double yy) {
		b = yy;
	}

	double a;
	double b;
};

Point::Point(double _X, double _Y) {
	a = _X;
	b = _Y;
}



int main()
{
	std::unique_ptr<double>d{ new double(1.0) };

	std::unique_ptr<Point>pt{ new Point(1.0, 2.0) };
	*d = 2.0;
	std::cout << "double d: " << *d << std::endl;
	std::cout << "Point x: " << pt->a << std::endl;
	std::cout << "Point y: " << pt->b << std::endl;
	std::cout << "Modificando" << std::endl;
	(*pt).X(3.0);
	(*pt).Y(3.0);
	pt->X(3.0);
	pt->Y(3.0);
	std::cout << "Point x: " << pt->a << std::endl;
	std::cout << "Point y: " << pt->b << std::endl;

}
