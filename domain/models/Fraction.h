#include "../../internal/application.h"

class Fraction
{
private:
	int num;
	int denom;
public:
	Fraction() = default;
	Fraction(int num, int denom) : num(num), denom(denom) {}
	int getNum()
	{
		return num;
	}
	int getDenom()
	{
		return denom;
	}
	void setNum(int num)
	{
		this->num = num;
	}
	void setDenom(int denom)
	{
		this->denom = denom;
	}
	void print()
	{
		cout << "[numerator: " << num << ", denominator: " << denom << "]" << endl;
	}
	~Fraction() = default;

	friend Fraction operator +(const Fraction& num1, const Fraction& num2);
	friend Fraction operator -(const Fraction& num1, const Fraction& num2);
	friend Fraction operator *(const Fraction& num1, const Fraction& num2);
	friend Fraction operator /(const Fraction& num1, const Fraction& num2);
};

	/*friend bool operator==(const Point& point1, const Point& point2);
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
};*/