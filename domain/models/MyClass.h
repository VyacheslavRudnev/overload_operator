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

class MyClass2
{
public:
    // Перевантаження оператора (new)
    void* operator new(size_t size);
	// Перевантаження оператора (delete)
    void operator delete(void* memory);

    void printMessage();
};