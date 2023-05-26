#include "../../internal/application.h"

class MyClass
{
private:
	bool value;
public:
	MyClass(bool val) : value(val) {}

	bool operator&&(const MyClass& other) const; // �������������� ��������� &&
	bool operator||(const MyClass& other) const; // �������������� ��������� ||
	bool operator!() const; // �������������� ��������� !
	void printValue() const;
};

class MyClass_2
{
private:
	int value;
public:
    MyClass_2(int val) : value(val) {}

    // �������������� ��������� ��������� (=)
    MyClass_2& operator=(const MyClass_2& other) {
        if (this != &other) {
            value = other.value;
        }
        return *this;
    }

    // �������������� ��������� ���������-��������� (+=)
    MyClass_2& operator+=(const MyClass_2& other) {
        value += other.value;
        return *this;
    }

    // �������������� ��������� ��������-��������� (-=)
    MyClass_2& operator-=(const MyClass_2& other) {
        value -= other.value;
        return *this;
    }

    // �������������� ��������� ��������-��������� (*=)
    MyClass_2& operator*=(const MyClass_2& other) {
        value *= other.value;
        return *this;
    }

    // �������������� ��������� ������-��������� (/=)
    MyClass_2& operator/=(const MyClass_2& other) {
        value /= other.value;
        return *this;
    }

    // �������������� ��������� �������-��������� (%=)
    MyClass_2& operator%=(const MyClass_2& other) {
        value %= other.value;
        return *this;
    }

    void printValue() const;
};
