#include "../domain/providers/operators_overloaded.h"


int main()
{
	ukr_lang;

	try
	{
		// Перевантажені оператори &&, ||, ! для класу MyClass
		MyClass obj1(true);
		MyClass obj2(false);
		println("Перевантажені оператори &&, ||, ! для класу MyClass");

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

		println("Перевантажені оператори =, +=, -=, *=, /=, %= для класу MyClass_2");
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
		next_line;
		
		println("Перевантажені оператори для класу Point +=, -=, *=, /=, %=");
		Point p1(1, 2);
		Point p2(2, 2);
		println("P1 ");
		p1.print();
		println("P2 ");
		p2.print();
		next_line;
		p1 += p2;
		p1.print();
		
		p1 -= p2;
		p1.print();
		
		p1 *= 2;
		p1.print();
		println("Перевантаження *= перший варіант *2");
		
		p1 *= p2;
		p1.print();
		println("Перевантаження *= другий варіант ");
		
		p1 /= 2;
		p1.print();
		p2 /= 2;
		p2.print();

		p1 %= 3;
		p1.print();
		next_line;
		
		println("Перевантаження оператору = для класу Name");
		next_line;
		char firstName[20] = "Вячеслав";
		char secondName[20] = "Руднєв";
		
		Name aName;
		Name name(firstName, secondName);
			cout << "Конструктор об'єкта name: ";
			name.write();
			aName = name;
			cout << "Присвоєння об'єкта aName: ";
			aName.write();
		println("Деструктор об'єкта name");
		cout << "Звернення до об'єкта aName: ";
		aName.write();
		_getch();
	}
	catch (const char* msg)
	{
		cout << msg << endl;
	}
	return 0;
}