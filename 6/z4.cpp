/*
4.  ������� ��� �������:
1)  ��� ������� ��'��� ������ ���� � ������ ���'�� � ������� � ����� ���������� ��� ��'���. �������� ��.
2)  ��� ������� ��'��� ������ ���� � ������ ���'�� � ������� � ����� ���������� ��������� �� ��'���. �������� ��.
3)  ��� ������� ��'��� ������ ���� � ������ ���'�� � ������� � ����� ���������� ������ ��'����. �������� ��.
�������� ���� 141
*/

#include <iostream>
using namespace std;

int F1();
int F2();
int F3();

int main()
{
	cout << F1() << endl;
	cout << F2() << endl;
	cout << F3() << endl;
	system("pause");
	return 0;
}

int F1()
{
	int f = 1;
	return f;
}

int F2()
{
	int* pf = new int(3);
	return *pf;
}

int F3()
{
	int f = 4;
	int& rf = f;
	return rf;
}