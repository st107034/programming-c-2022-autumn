#include "Fraction.h"

Fraction Fraction::operator=(Fraction& f)
{
	this->num = f.num;
	this->det = f.det;
	return *this;
}

Fraction Fraction::operator+(int d)
{
	return Fraction(num + det * d, det);
}

Fraction Fraction::operator-(int d)
{
	return Fraction(num - det * d, det);
}

Fraction Fraction::operator*(int d)
{
	return Fraction(num * d, det);
}

Fraction Fraction::operator/(int d)
{
	return Fraction(num, det * d);
}

Fraction operator+(int d, Fraction f)
{
	return Fraction(f.num + d * f.det, f.det);
}

Fraction operator-(int d, Fraction f)
{
	return Fraction(d * f.det - f.num, f.det);
}

Fraction operator*(int d, Fraction f)
{
	return Fraction(f.num * d, f.det);
}

Fraction operator/(int d, Fraction f)
{
	return Fraction(f.num, f.det * d);
}

Fraction Fraction::operator+(Fraction f)
{
	return Fraction(num * f.det + f.num * det, det * f.det);
}

Fraction Fraction::operator-(Fraction f)
{
	return Fraction(num * f.det - f.num * det, det * f.det);
}

Fraction Fraction::operator*(Fraction f)
{
	return Fraction(num * f.num, det * f.det);
}

Fraction Fraction::operator/(Fraction f)
{
	return Fraction(num * f.det, det * f.num);
}

std::ostream& operator << (std::ostream& stream, const Fraction& f)
{
	stream << f.num << "/" << f.det;
	return stream;
}
