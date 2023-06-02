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
    void* operator new(size_t size);/* {
        println("������ ������������ ��������� new. �����: " << size);
        void* memory = malloc(size);
        return memory;
    }*/

    void operator delete(void* memory);/* {
        println("������ ��������������� ��������� delete.");
        free(memory);
    }*/

    void printMessage();/* {
        println("Hello from MyClass");
    }*/
};