#pragma once
#include <iostream>
#include <cmath>

class Fraction
{
private:
	int num;
	int det;


public:
	Fraction(int num = 1, int det = 1) : num(num), det(det)
	{
	}

	Fraction(const Fraction& f) : num(f.num), det(f.det)
	{
	}

	~Fraction()
	{
	}

	Fraction operator=(Fraction& f);

	Fraction operator+(int d);
	Fraction operator-(int d);
	Fraction operator*(int d);
	Fraction operator/(int d);

	friend Fraction operator+(int d, Fraction f);
	friend Fraction operator-(int d, Fraction f);
	friend Fraction operator*(int d, Fraction f);
	friend Fraction operator/(int d, Fraction f);

	Fraction operator+(Fraction c);
	Fraction operator-(Fraction c);
	Fraction operator*(Fraction c);
	Fraction operator/(Fraction c);

	friend std::ostream& operator << (std::ostream& stream, const Fraction& f);
};


