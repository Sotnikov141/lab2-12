//������� ���� 141
//������� �������RectPS (x1, y1, x2, y2, P, S), ��� �������� �������� P � ����� S ������������ � ���������, ������������ ����
//���������, �� ������������ (x1, y1), (x2, y2) ���� ����������� ������ (x1, y1, x2, y2 - �����, P � S - ������ ��������� ������� ����).
//�� ��������� ���� ������� ������ ��������� � ����� ����� ������������ � ������ ������������ ���������.
#include <iostream>
using namespace std; 
void RectPS(double x1, double x2, double y1, double y2, double P, double S);
int main() {
    setlocale(LC_ALL, "RUSSIAN"); //������������� ������� ���� ��� �������
    double x1, y1, x2, y2; // ������ �� �����
    double p = 0, s = 0; //������ �� ������
   cout << "������� ������ ���������� X: ";
    cin >> x1;
    cout << "������� ������ ���������� X: ";
    cin >> x2;
    cout << "������� ������ ���������� Y: ";
    cin >> y1;
    cout << "������� ������ ���������� Y: ";
    cin >> y2;
    RectPS(x1, x2, y1, y2, p, s);
    return 0;
}
void RectPS(double x1, double x2, double y1, double y2, double P, double S)
{
    P = (abs(x2 - x1) + abs(y2 - y1)) * 2;
    S = abs(x2 - x1) * abs(y2 - y1);
    cout << "�������� �������������� �����: ";
    cout << P << endl;
    cout << "������� �������������� �����: ";
    cout << S;
}
