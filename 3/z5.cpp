//������� ���� 141
//������� ������� IsPower5 (K) �������� ����, ��� ������� True, ���� ����� �������� K (> 0) � �������� ����� 5, � False � ������
//�������. � �� ��������� ������ ������� ������� ����� 5 � ����� � 10 ����� ���������� �����.
#include <iostream>

using namespace std;

bool IsPower5(int k)
{
    if (k < 5) return false; //k<0 ���� �������, ��� 5^0 = 1
    while (k % 5 == 0)
    {
        k /= 5;
    }
    return k == 1;
}
int main()
{
    system("chcp 65001");
    int array[10], count = 0;
    cout << "������� 10 �������� �������: " << endl;
    for (int i = 0; i < 10; i++)
    {
        cout << i + 1 << " ��������: ";
        cin >> array[i];
        cout << endl;
    }
    for (int i = 0; i < 10; i++)
    {
        if (IsPower5(array[i])) count++;
    }
    cout << "����������� �������� ����� 5 �� �����, �������������� � �������: ";
    cout << count;
    return 0;
}