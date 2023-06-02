#include "../../internal/application.h"

class Array
{
private:
	int Size;

public:
	int* data;
	Array(int size)	
	{
		this->Size = size;
		this->data= new int[size];
		for (int i = 0; i < size; i++)
		{
			data[i] = i+2;
		}
		cout << "Виклик конструктора " << this << endl;
	}
	Array(const Array& other)
	{
		this->Size= other.Size;
		this->data = new int[other.Size];
		for (int i = 0; i < other.Size; i++)
		{
			this->data[i] = other.data[i];
		}
		cout << "Виклик конструктора копіювання " << this << endl;
	}
	Array& operator=(const Array& other);
	
	int& operator[](int index) const
	{
		try
		{
			if (index<0||index>Size)
					{
						throw "Помилка! Індекс за межами масиву ";
					}
		}
		catch (const char* exception)
		{
			println(exception);
		}
		return data[index];
	}
	
	int printArray();

	
	
	~Array() {
		cout<<"Виклик деструктора " << this << endl;
		delete[] data;
	}
	
};
