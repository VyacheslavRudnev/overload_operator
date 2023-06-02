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

class MyClass2
{
public:
    // �������������� ��������� (new)
    void* operator new(size_t size);
	// �������������� ��������� (delete)
    void operator delete(void* memory);

    void printMessage();
};