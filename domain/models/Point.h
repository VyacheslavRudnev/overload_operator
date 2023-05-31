#include "../../internal/application.h"

class Point
{
private:
		int x;
		int y;
public:
	Point() = default;
	Point(int x, int y): x(x), y(y) {}
	int getX()
	{
		return x;
	}
	int getY()
	{
		return y;
	}
	void setX(int x)
	{
		this->x = x;
	}
	void setY(int y)
	{
		this->y = y;
	}
	void print()
	{
		println("[x: " << x << ", y: " << y << "]");
	}
	~Point() = default;

	friend Point operator+(const Point& point1, const Point& point2);
	friend Point operator-(const Point& point1, const Point& point2);
	friend Point operator*(const Point& point1, const Point& point2);
	friend Point operator/(const Point& point1, const Point& point2);

	friend bool operator==(const Point& point1, const Point& point2);
	friend bool operator!=(const Point& point1, const Point& point2);
    friend bool operator>(const Point& point1, const Point& point2);
	friend bool operator<(const Point& point1, const Point& point2);
	friend bool operator>=(const Point& point1, const Point& point2);
	friend bool operator<=(const Point& point1, const Point& point2);

	Point& operator++();
	Point& operator--();
	const Point operator++(int);
	const Point operator--(int);

	friend ostream& operator<< (ostream& output, const Point& point);
	friend istream& operator>> (istream& input, Point &point);

	// Перевантаження операторів (+=, -=, *=, /=, %=)
	Point& operator+=(const Point& other);
	Point& operator-=(const Point& other);
	Point& operator*=(const int scalar); //варіант 1 
	Point& operator*=(const Point& other);//варіант 2
	Point& operator/=(const int scalar);
	Point& operator%=(const int scalar);



};