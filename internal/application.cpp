#include "../domain/providers/operators_overloaded.h"


int main()
{
	ukr_lang;

	try
	{
		// ������������ ��������� &&, ||, !
		MyClass obj1(true);
		MyClass obj2(false);
		println("������������ ��������� &&, ||, ! ");

		MyClass result1 = obj1 && obj2;
		result1.printValue();

		MyClass result2 = obj1 || obj2;
		result2.printValue();

		MyClass result3 = !obj1;
		result3.printValue();
		next_line;

		// ������������ ��������� =, +=, -=, *=, /=, %=
		MyClass_2 obj4(10);
		MyClass_2 obj5(5);

		println("������������ ��������� =, +=, -=, *=, /=, %=");
		// �������� ��������� (=)
		MyClass_2 result4 = obj4;
		result4.printValue();  // Output: Value: 10

		// �������� ���������-��������� (+=)
		result4 += obj5;
		result4.printValue();  // Output: Value: 15

		// �������� ��������-��������� (-=)
		result4 -= obj5;
		result4.printValue();  // Output: Value: 10

		// �������� ��������-��������� (*=)
		result4 *= obj5;
		result4.printValue();  // Output: Value: 50

		// �������� ������-��������� (/=)
		result4 /= obj5;
		result4.printValue();  // Output: Value: 10

		// �������� �������-��������� (%=)
		result4 %= obj5;
		result4.printValue();  // Output: Value: 0


	}
	catch (const char* msg)
	{
		cout << msg << endl;
	}
	return 0;
}