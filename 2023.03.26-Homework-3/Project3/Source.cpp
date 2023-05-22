#include <iostream>

struct Shape
{
	int a;
	int b;
	int c;

	Shape(int a = 0, int b = 0, int c = 0) : a(a), b(b), c(c)
	{
	}

	~Shape()
	{
	}
};

struct Rectangle : Shape
{
	Rectangle(int a = 0, int b = 0) : Shape(a, b, 0)
	{
	}

	~Rectangle()
	{
	}

	int s()
	{
		return a * b;
	}
};

struct Triangle : Shape
{
	Triangle(int a = 0, int b = 0, int c = 0) : Shape(a, b, c)
	{
	}

	~Triangle()
	{
	}

	double s()
	{
		double p = (a + b + c) / 2.0;
		return sqrt(p * (p - a) * (p - b) * (p - c));
	}
};

struct Square : Rectangle
{
	Square(int a = 0) : Rectangle(a, a)
	{
	}

	~Square()
	{
	}
};

struct Circle : Square
{
	Circle(int a = 0) : Square(a)
	{
	}

	~Circle()
	{
	}

	double s()
	{
		return Square::s() * 3.14;
	}
};

int main(int argc, char* argv[])
{
	Rectangle r(5, 4);
	Triangle t(5, 4, 2);
	Square s(5);
	Circle c(5);

	std::cout << "Rectangle S = " << r.s() << std::endl;
	std::cout << "Triangle S = " << t.s() << std::endl;
	std::cout << "Square S = " << s.s() << std::endl;
	std::cout << "Rectangle S = " << c.s() << std::endl;

}