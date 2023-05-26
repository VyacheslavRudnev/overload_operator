#include "../../internal/application.h"

class MyClass
{
private:
	bool value;
public:
	MyClass(bool val) : value(val) {}

	bool operator&&(const MyClass& other) const; // перевантаження оператора &&
	bool operator||(const MyClass& other) const; // перевантаження оператора ||
	bool operator!() const; // перевантаження оператора !
	void printValue() const;
};

class MyClass_2
{
private:
	int value;
public:
    MyClass_2(int val) : value(val) {}

    // Перевантаження оператора присвоєння (=)
    MyClass_2& operator=(const MyClass_2& other) {
        if (this != &other) {
            value = other.value;
        }
        return *this;
    }

    // Перевантаження оператора додавання-присвоєння (+=)
    MyClass_2& operator+=(const MyClass_2& other) {
        value += other.value;
        return *this;
    }

    // Перевантаження оператора віднімання-присвоєння (-=)
    MyClass_2& operator-=(const MyClass_2& other) {
        value -= other.value;
        return *this;
    }

    // Перевантаження оператора множення-присвоєння (*=)
    MyClass_2& operator*=(const MyClass_2& other) {
        value *= other.value;
        return *this;
    }

    // Перевантаження оператора ділення-присвоєння (/=)
    MyClass_2& operator/=(const MyClass_2& other) {
        value /= other.value;
        return *this;
    }

    // Перевантаження оператора залишку-присвоєння (%=)
    MyClass_2& operator%=(const MyClass_2& other) {
        value %= other.value;
        return *this;
    }

    void printValue() const;
};
