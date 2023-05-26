#include "../domain/providers/operators_overloaded.h"


int main()
{
	ukr_lang;

	try
	{
		// Перевантажені оператори &&, ||, !
		MyClass obj1(true);
		MyClass obj2(false);
		println("Перевантажені оператори &&, ||, ! ");

		MyClass result1 = obj1 && obj2;
		result1.printValue();

		MyClass result2 = obj1 || obj2;
		result2.printValue();

		MyClass result3 = !obj1;
		result3.printValue();
		next_line;

		// Перевантажені оператори =, +=, -=, *=, /=, %=
		MyClass_2 obj4(10);
		MyClass_2 obj5(5);

		println("Перевантажені оператори =, +=, -=, *=, /=, %=");
		// оператор присвоєння (=)
		MyClass_2 result4 = obj4;
		result4.printValue();  // Output: Value: 10

		// оператор додавання-присвоєння (+=)
		result4 += obj5;
		result4.printValue();  // Output: Value: 15

		// оператор віднімання-присвоєння (-=)
		result4 -= obj5;
		result4.printValue();  // Output: Value: 10

		// оператор множення-присвоєння (*=)
		result4 *= obj5;
		result4.printValue();  // Output: Value: 50

		// оператор ділення-присвоєння (/=)
		result4 /= obj5;
		result4.printValue();  // Output: Value: 10

		// оператор залишку-присвоєння (%=)
		result4 %= obj5;
		result4.printValue();  // Output: Value: 0


	}
	catch (const char* msg)
	{
		cout << msg << endl;
	}
	return 0;
}