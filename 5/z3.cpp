//Напишіть програму, в якій створюються три об'єкти дійсного типу середній бал студента у вільній пам'яті;
//введіть їх значення з консолі; знайдіть об’єм виділеної пам’яті; роздрукуйте значення середнього балу кожного студента.
//Увага! Після виведення обов’язково звільніть пам’ять від об’єктів.
//Сотніков Олег

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

		cin >> *pAve1;//ввод числа

		cin >> *pAve2;//ввод числа

		cin >> *pAve3;//ввод числа

		cout << "size of memory" << sizeof(*pAve1) * 3; //вывод  использованой памяти

		cout << "Ave1 = " << *pAve1; //вывод
		cout << "Ave2 = " << *pAve2;//вывод
		cout << "Ave3 = " << *pAve3;//вывод

		delete pAve1; 
		pAve1 = NULL;
		delete pAve2;
		pAve2 = NULL;
		delete pAve3;
		pAve3 = NULL;

	}


	return 0;

}