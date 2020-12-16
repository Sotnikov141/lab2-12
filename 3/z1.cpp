//Сотніков Олег 141
//Описати функціюRectPS (x1, y1, x2, y2, P, S), яка обчислює периметр P і площу S прямокутника зі сторонами, паралельними осям
//координат, за координатами (x1, y1), (x2, y2) його протилежних вершин (x1, y1, x2, y2 - вхідні, P і S - вихідні параметри дійсного типу).
//За допомогою цієї функції знайти периметри і площі трьох прямокутників з даними протилежними вершинами.
#include <iostream>
using namespace std; 
void RectPS(double x1, double x2, double y1, double y2, double P, double S);
int main() {
    setlocale(LC_ALL, "RUSSIAN"); //устанавливаем русский язык для консоли
    double x1, y1, x2, y2; // Данные на входе
    double p = 0, s = 0; //Данные на выходе
   cout << "Введите первую координату X: ";
    cin >> x1;
    cout << "Введите вторую координату X: ";
    cin >> x2;
    cout << "Введите первую координату Y: ";
    cin >> y1;
    cout << "Введите вторую координату Y: ";
    cin >> y2;
    RectPS(x1, x2, y1, y2, p, s);
    return 0;
}
void RectPS(double x1, double x2, double y1, double y2, double P, double S)
{
    P = (abs(x2 - x1) + abs(y2 - y1)) * 2;
    S = abs(x2 - x1) * abs(y2 - y1);
    cout << "Периметр прямоугольника равен: ";
    cout << P << endl;
    cout << "Площадь прямоугольника равен: ";
    cout << S;
}
