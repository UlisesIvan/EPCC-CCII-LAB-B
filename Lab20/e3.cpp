


#include <iostream>

using namespace std;
class C1
{
private:
	shared_ptr<double> d{0};
public:
	C1() {}
	C1(shared_ptr<double> value) : d(value) {}
	virtual ~C1() { cout << "\nC1 destructor\n"; }
	virtual void print() const { cout << "Valor " << *d; }
	void setd(double dd) { *d = dd; }
	shared_ptr<double> getd() { return d; }

};

class C2 :public C1
{
private:
	shared_ptr<double> d1 = getd();

public:
	C2(shared_ptr<double> value1) : d1(value1) {}
	virtual ~C2() { cout << "\nC2 destructor\n"; }
	virtual void print() const { cout << "Valor " << *d1; }
};

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
	shared_ptr<C1> d2{ make_shared<C1>(1.0) };

	std::unique_ptr<Point>pt{ new Point(1.0, 2.0) };
	(*d2).setd(2.0);
	std::cout << "double d: " << (*d2).getd() << std::endl;
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
