#include "../models/complex.h"

Complex operator +(const Complex& c1, const Complex& c2)
{
	return Complex(c1.x + c2.x, c1.y + c2.y);
}
Complex operator -(const Complex& c1, const Complex& c2)
{
	return Complex(c1.x - c2.x, c1.y - c2.y);
}
Complex operator *(const Complex& c1, const Complex& c2)
{
	return Complex(c1.x * c2.x, c1.y * c2.y);
}
Complex operator /(const Complex& c1, const Complex& c2)
{
	if (c1.x == 0 || c2.x == 0)
	{
		throw "Division by zero";
	}
	return Complex(c1.x / c2.x, c1.y / c2.y);
}