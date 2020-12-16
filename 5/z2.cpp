//Напишіть програму, в якій оголошуються беззнакове коротке ціле Num і вказівник на нього  pNum.
//Задайте адресу цілого вказівнику. Виведіть на екран значення змінних і адреси кожної змінної у шістнадцятиричній і десятковій системі числення.
//Порівняйте отримані результати. Зробіть висновки.
//Сотніков Олег 141

#include <iostream>
using namespace std;
int main() {
	unsigned short int Num = 25; 
	unsigned short int* pNum = &Num; 

	cout << "Num Value = " << Num << endl; // ввод
	cout << "NUm Value = " << *pNum << endl; // вывод

	cout << "pNum Value (16) = " << pNum << endl;// вывод
	cout << "pNum Value (16) = " << &Num;// вывод

	cout << "pNum Value (10) = " << (long int)pNum << endl;// вывод
	cout << "pNum Value (10) = " << (long int)&Num << endl;// вывод

	cout << "pNum Adress = " << &pNum << endl;
	cout << "pNum Adress = " << (long int)&pNum;
	return 0;

}