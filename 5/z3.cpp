//�������� ��������, � ��� ����������� ��� ��'���� ������� ���� ������� ��� �������� � ����� ���'��;
//������ �� �������� � ������; ������� �ᒺ� ������� �����; ����������� �������� ���������� ���� ������� ��������.
//�����! ϳ��� ��������� ���������� ������� ������ �� �ᒺ���.
//������� ����

#include <iostream>
using namespace std;
int main() {

	float* pAve1 = new float(5); 
	float* pAve2 = new float(3); 
	float* pAve3 = new float(4.5); 

	if ((pAve1 == NULL) || (pAve2 == NULL) || (pAve3 == NULL)) 

		cout << "Memory Error";

	else
	{

		cin >> *pAve1;//���� �����

		cin >> *pAve2;//���� �����

		cin >> *pAve3;//���� �����

		cout << "size of memory" << sizeof(*pAve1) * 3; //�����  ������������� ������

		cout << "Ave1 = " << *pAve1; //�����
		cout << "Ave2 = " << *pAve2;//�����
		cout << "Ave3 = " << *pAve3;//�����

		delete pAve1; 
		pAve1 = NULL;
		delete pAve2;
		pAve2 = NULL;
		delete pAve3;
		pAve3 = NULL;

	}


	return 0;

}