#include "../../internal/application.h"

class Name
{
	char* firstName;
	char* secondName;
	void setCharArray(char*& dest, const char* source)
	{
		int strSize = strlen(source) + 1;
		dest = new char[strSize];
		strcpy_s(dest, strSize, source);
	}
	void remove()
	{
		if (firstName != nullptr)
		{
			delete[] firstName;
		}
		if (secondName != nullptr)
		{
			delete[] secondName;
		}
	}
public:
	Name()
	{
		firstName = nullptr;
		secondName = nullptr;
	}
	Name(const char* fName, const char* sName)
	{
		setCharArray(firstName, fName);
		setCharArray(secondName, sName);
	}
	Name(const Name& name)
	{
		setCharArray(firstName, name.firstName);
		setCharArray(secondName, name.secondName);
	}
	~Name()
	{
		remove();
	}
	Name& operator= (const Name& name);
	
	void write()
	{
		println(firstName << " " << secondName);
	}
};

void writeLine(Name name);
