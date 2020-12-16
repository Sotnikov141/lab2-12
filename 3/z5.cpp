//Сотніков Олег 141
//Описати функцію IsPower5 (K) логічного типу, яка повертає True, якщо цілий параметр K (> 0) є ступенем числа 5, і False в іншому
//випадку. З її допомогою знайти кількість степенів числа 5 в наборі з 10 цілих позитивних чисел.
#include <iostream>

using namespace std;

bool IsPower5(int k)
{
    if (k < 5) return false; //k<0 если считать, что 5^0 = 1
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
    cout << "Введите 10 значений массива: " << endl;
    for (int i = 0; i < 10; i++)
    {
        cout << i + 1 << " значение: ";
        cin >> array[i];
        cout << endl;
    }
    for (int i = 0; i < 10; i++)
    {
        if (IsPower5(array[i])) count++;
    }
    cout << "Колличество степеней числа 5 из чисел, представленных в массиве: ";
    cout << count;
    return 0;
}