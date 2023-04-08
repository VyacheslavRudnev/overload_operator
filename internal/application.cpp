#include "../domain/providers/operators_overloaded.h"

int main()
{
	try
	{
		Point point1;
		Point point2;
		cin >> point1;
		cin >> point2;
		cout << point1 << endl;
		cout << point2 << endl;
	}
	catch (const char* msg)
	{
		cout << msg << endl;
	}
	return 0;
}