#include "../models/Point.h"
#include "../models/MyClass.h"
#include "../models/Name.h"
#include "../models/Arrey.h"


Point operator +(const Point& point1,const Point& point2)
{
	return Point(point1.x + point2.x, point1.y + point2.y);
}
Point operator -(const Point& point1, const Point& point2)
{
	return Point(point1.x - point2.x, point1.y - point2.y);
}
Point operator *(const Point& point1, const Point& point2)
{
	return Point(point1.x * point2.x, point1.y * point2.y);
} 
Point operator /(const Point& point1, const Point& point2)
{
	if (point1.x == 0 || point2.x == 0)
	{
		throw "Division by zero";
	}
	return Point(point1.x / point2.x, point1.y / point2.y);
}

Point& Point::operator++()
{
	++x; ++y; return *this;
}
Point& Point::operator--()
{
	--x; --y; return *this;
}

const Point Point::operator++(int)
{
	Point point{ x, y }; 
	++(*this); 
	return point; 
}
const Point Point::operator--(int)
{
	Point point{ x, y };
	--(*this);
	return point;
}

bool operator==(const Point& point1, const Point& point2){
   return point1.x == point2.x && point1.y == point2.y;
}
bool operator!=(const Point& point1, const Point& point2){
	return !(point1 == point2);
}
bool operator>(const Point& point1, const Point& point2){
	return point1.x > point2.x && point1.y > point2.y;
}
bool operator<(const Point& point1, const Point& point2){
	return point1.x < point2.x && point1.y < point2.y;
}
bool operator>=(const Point& point1, const Point& point2){
	return point1.x >= point2.x && point1.y >= point2.y;
}
bool operator<=(const Point& point1, const Point& point2){
	return point1.x <= point2.x && point1.y <= point2.y;
}
ostream& operator<< (ostream& output, const Point& point) {
	output << "[" << point.x << " : " << point.y << "]";
	return output;
}
istream& operator>> (istream& input, Point &point){
	cout << "Enter x: "; input >> point.x;
	cout << "Enter y: "; input >> point.y;
	return input;
}
bool MyClass::operator&&(const MyClass& other) const {
	return value && other.value;
}

bool MyClass::operator||(const MyClass& other) const {
	return value || other.value;
}

bool MyClass::operator!() const {
	return !value;
}

void MyClass::printValue() const {
	println("Value: " << value);
}

void* MyClass2::operator new(size_t size) {
	println("������ ������������ ��������� new. �����: " << size);
	void* memory = malloc(size);
	return memory;
}

void MyClass2::operator delete(void* memory) {
	println("������ ��������������� ��������� delete.");
	free(memory);
}

void MyClass2::printMessage() {
	println("Hello from MyClass");
}

Point& Point::operator+=(const Point& other) {
	x += other.x;
	y += other.y;
	return *this;
}

Point& Point::operator-=(const Point& other) {
	x -= other.x;
	y -= other.y;
	return *this;
}

Point& Point::operator*=(const int scalar) {
	x *= scalar;
	y *= scalar;
	return *this;
}

Point& Point::operator*=(const Point& other) {
	x *= other.x;
	y *= other.y;
	return *this;
}

Point& Point::operator/=(const int scalar) {
	x /= scalar;
	y /= scalar;
	return *this;
}

Point& Point::operator%=(const int scalar) {
	x %= scalar;
	y %= scalar;
	return *this;
}

Name& Name::operator= (const Name& name)
{
	if (this == &name)
	{ 
		return *this;
	}
	remove();
	
	setCharArray(firstName, name.firstName);
	setCharArray(secondName, name.secondName);
		return *this;
}

void writeLine(Name name)
{
	name.write();
}
//�������������� ���������� = ��� ����� Array
Array& Array::operator=(const Array& other)
{
	cout << "������ ��������� = " << this << endl;
	this->Size = other.Size;
	if (this->data != nullptr)
	{
		delete[] this->data;
	}
	this->data = new int[other.Size];
	for (int i = 0; i < other.Size; i++)
	{
		this->data[i] = other.data[i];
	}
	return *this;
}

int Array::printArray()
{
	for (int i = 0; i < Size; i++)
	{
		cout << data[i] << " ";
	}
	next_line;

	return 0;
}