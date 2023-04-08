#include "../domain/providers/operators_overloaded.h"

int main()
{
	try
	{
		Point p1(12, 14);
		Point temp = ++p1;
		cout << "temp= "; temp.print();
		cout << "p1 = "; p1.print();
		
	}
	catch (const char* msg)
	{
		cout << msg << endl;
	}
	return 0;
}