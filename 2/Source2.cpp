//�������� ��������������� ���������� ������������ � ����� ����� : 1 - ������� a, 2 - ����� R1 ��������� ����(R1 = a �(3) 1 / 2 / 6),
//3 - ����� R2 ��������� ����(R2 = 2 � R1), 4 - �����
//S = a2 �(3) 1 / 2 / 4. ���� ����� ������ � ��� �������� � ���� ��������.������� �������� ����� �������� ������ 
//����������(� ���� � �������).
//������� ���� 141
#include<iostream>

double sqareRoot(float num);


using namespace std;


int main()
{
    float A = 0;
    float R1 = 0;
    float R2 = 0;
    float S = 0;
    int number = 0;
    float value = 0;

    cout << "write number and value";
    cin >> number >> value;

    if (number == 1)
    {
        A = value;
        R1 = A * sqareRoot(3) / 6;
        R2 = 2 * R1;
        S = A * A * sqareRoot(3) / 4;
    }
    else
    {
        if (number == 2)
        {
            R1 = value;
            A = R1 * 6 / sqareRoot(3);
            R2 = 2 * R1;
            S = A * A * sqareRoot(3) / 4;
        }
        else {
            if (number == 3)
            {
                R2 = value;
                R1 = R2 / 2;
                A = R1 * 6 / sqareRoot(3);
                S = A * A * sqareRoot(3) / 4;
            }
            else {
                S = value;
                A = sqareRoot(S * 4 / sqareRoot(3));
                R1 = A * sqareRoot(3) / 6;
                R2 = 2 * R1;
            }
        }
    }
    cout << "a=" << A << "\n" << "R1=" << R1 << "\n" << "R2=" << R2 << "\n" << "S=" << S;
    cin.get(); cin.get();
    return 0;
}

double sqareRoot(float num)
{
    double low = 1.0;
    double high = num;
    for (int i = 0; i < 30; i++)
    {
        double estimate = (high + low) / 2;
        if (estimate * estimate > num)
        {
            high = estimate;
        }
        else
        {
            low = estimate;
        }
    }
    return(high + low) / 2;
}