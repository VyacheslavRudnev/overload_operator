#include "../domain/providers/operators_overloaded.h"

int main()
{
	try
	{	Fraction num1(2,8);
		Fraction num2(5,4);
		
		Fraction num3 = num1 + num2;
		num3.print();

		Fraction num4 = num1 - num2;
		num4.print();

		Fraction num5 = num1 * num2;
		num5.print();

		Fraction num6 = num1 / num2;
		num6.print();

	}
	catch (const char* msg)
	{
		cout << msg << endl;
	}
		
	
	return 0;
}