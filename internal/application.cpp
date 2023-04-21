#include "../domain/providers/operators_overloaded.h"

int main()
{
	try
	{
		Complex c1(2.0, 3.0);
		Complex c2(5.0, 4.0);
		

		Complex c3 = c1 + c2;
		c3.print();

		Complex c4 = c1 - c2;
		c4.print();

		Complex c5 = c1 * c2;
		c5.print();
		
		Complex c6 = c1 / c2;
		c6.print();

	}
	catch (const char* msg)
	{
		cout << msg << endl;
	}
	return 0;
}