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
		cout << "[x: " << x << ", y: " << y << "]" << endl;
	}
	~Point() = default;

	friend Point operator+(const Point& point1, const Point& point2);
	friend Point operator-(const Point& point1, const Point& point2);
	friend Point operator*(const Point& point1, const Point& point2);
	friend Point operator/(const Point& point1, const Point& point2);
	Point& operator++();
	Point& operator--();
	const Point operator++(int);
	const Point operator--(int);
};