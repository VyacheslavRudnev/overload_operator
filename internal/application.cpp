#include "../domain/providers/operators_overloaded.h"


int main()
{
	ukr_lang;

	try
	{
		// ������������ ��������� &&, ||, ! ��� ����� MyClass
		MyClass obj1(true);
		MyClass obj2(false);
		println("������������ ��������� &&, ||, ! ��� ����� MyClass");

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

		println("������������ ��������� =, +=, -=, *=, /=, %= ��� ����� MyClass_2");
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
		next_line;
		
		println("������������ ��������� ��� ����� Point +=, -=, *=, /=, %=");
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
		println("�������������� *= ������ ������ *2");
		
		p1 *= p2;
		p1.print();
		println("�������������� *= ������ ������ ");
		
		p1 /= 2;
		p1.print();
		p2 /= 2;
		p2.print();

		p1 %= 3;
		p1.print();
		next_line;
		
		println("�������������� ��������� = ��� ����� Name");
		next_line;
		char firstName[20] = "��������";
		char secondName[20] = "�����";
		
		Name aName;
		Name name(firstName, secondName);
			cout << "����������� ��'���� name: ";
			name.write();
			aName = name;
			cout << "��������� ��'���� aName: ";
			aName.write();
		println("���������� ��'���� name");
		cout << "��������� �� ��'���� aName: ";
		aName.write();
		_getch();
	}
	catch (const char* msg)
	{
		cout << msg << endl;
	}
	return 0;
}