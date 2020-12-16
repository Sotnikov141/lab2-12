//Сотніков Олег 141
//Описати функцію Sin1(x, ε) дійсного типу(параметри x, ε - дійсні, ε > 0), 
//знаходить наближене значення функції sin(x) : sin(x) = x - x3 / (3!) + x5 / (5!) - ... + (-1) n • x2 • n + 1 / ((2 • n + 1)!) + ....


#include <iostream>
#include <cmath>

using namespace std;

double Sin1(double x, double e)
{
    int k = x, s = 0, n = 0, fact = 1;
    while (k > e)
    {
        fact *= 2 * n + 1;
        k = (((-1) ^ n) * (pow(x, 2 * n + 1))) / fact;
        s += k;
        n++;
    }
    return s;
}
int main()
{
    system("chcp 65001");
    int X, E;
    cout << "Введите х:";
    cin >> X;
    cout << "Введите e:";
    cin >> E;
    cout << "sin (x) = ";
    cout << Sin1(X, E);
    return 0;
}