#include "../domain/providers/operators_overloaded.h"


int main()
{
	ukr_lang;

	try
	{
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
		
		println("Перевантажені оператори new delete для класу MyClass2");
		MyClass2* obj = new MyClass2();
		obj->printMessage();
		delete obj;
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
		println("Перевантаження *= варіант 1");
		
		p1 *= p2;
		p1.print();
		println("Перевантаження *= варіант 2");
		
		p1 /= 2;
		p1.print();
		p2 /= 2;
		p2.print();

		p1 %= 3;
		p1.print();
		next_line;
		println("Перевантаження оператора () для класу Point (x+y)");
		Point point(1, 2);
		println(point());
		next_line;
		
		println("Перевантаження оператора = для класу Name");
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
		next_line;
		
		println("Перевантаження оператора = для класу Array");
		Array arr1(5);
		Array arr2(2);
		arr1 = arr2;

		println("Перевантаження оператора [] для класу Array");
		Array a(10);
		println("Запит значання елемента масиву за індексом 3: ")
		println(a[3]);
		a.printArray();
		println("Запис нового значання в масив за індексом 3: ")
		a[3] = 777;
		a.printArray();
		next_line;
		//перевірка на вихід за межі масиву
		println(a[-1]);
		println(a[100]);

		


	}
	catch (const char* msg)
	{
		cout << msg << endl;
	}
	return 0;
}