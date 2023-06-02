#include "../domain/providers/operators_overloaded.h"


int main()
{
	ukr_lang;

	try
	{
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
		
		println("������������ ��������� new delete ��� ����� MyClass2");
		MyClass2* obj = new MyClass2();
		obj->printMessage();
		delete obj;
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
		println("�������������� *= ������ 1");
		
		p1 *= p2;
		p1.print();
		println("�������������� *= ������ 2");
		
		p1 /= 2;
		p1.print();
		p2 /= 2;
		p2.print();

		p1 %= 3;
		p1.print();
		next_line;
		println("�������������� ��������� () ��� ����� Point (x+y)");
		Point point(1, 2);
		println(point());
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
		next_line;
		
		println("�������������� ��������� = ��� ����� Array");
		Array arr1(5);
		Array arr2(2);
		arr1 = arr2;

		println("�������������� ��������� [] ��� ����� Array");
		Array a(10);
		println("����� �������� �������� ������ �� �������� 3: ")
		println(a[3]);
		a.printArray();
		println("����� ������ �������� � ����� �� �������� 3: ")
		a[3] = 777;
		a.printArray();
		next_line;
		//�������� �� ����� �� ��� ������
		println(a[-1]);
		println(a[100]);

		


	}
	catch (const char* msg)
	{
		cout << msg << endl;
	}
	return 0;
}