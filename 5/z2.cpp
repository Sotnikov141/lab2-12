//�������� ��������, � ��� ������������ ���������� ������� ���� Num � �������� �� �����  pNum.
//������� ������ ������ ���������. ������� �� ����� �������� ������ � ������ ����� ����� � ���������������� � ��������� ������ ��������.
//��������� ������� ����������. ������ ��������.
//������� ���� 141

#include <iostream>
using namespace std;
int main() {
	unsigned short int Num = 25; 
	unsigned short int* pNum = &Num; 

	cout << "Num Value = " << Num << endl; // ����
	cout << "NUm Value = " << *pNum << endl; // �����

	cout << "pNum Value (16) = " << pNum << endl;// �����
	cout << "pNum Value (16) = " << &Num;// �����

	cout << "pNum Value (10) = " << (long int)pNum << endl;// �����
	cout << "pNum Value (10) = " << (long int)&Num << endl;// �����

	cout << "pNum Adress = " << &pNum << endl;
	cout << "pNum Adress = " << (long int)&pNum;
	return 0;

}