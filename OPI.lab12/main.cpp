#include<iostream>
using namespace std;
void matrices();
double multiplic();
double division();
double sum();
double difference();
int examinationOfSwitch(int& option);
void main() {
	setlocale(LC_CTYPE, "RUSSIAN");
	int a = 0,option=0;
	while (a != 1)
	{
		cout << "___________________________$$_________________________" << endl;
		cout << "||  Выберите действие,которое необходимо выполнить: ||" << endl;
		cout << "||  1.Умножение чисел                               ||" << endl;
		cout << "||  2.Деление чисел                                 ||" << endl;
		cout << "||  3.Сложение числел                               ||" << endl;
		cout << "||  4.Вычитание чисел                               ||" << endl;
		cout << "||  5.Действия с матрицами                          ||" << endl;
		cout << "||  6.Выход                                         ||" << endl;
		cout << "***************************&&***********************" << endl;
		cout << "\nВыберите действие калькулятора: ";
		examinationOfSwitch(option);
		cout << "Успешно !" << endl;
		switch (option)
		{
			case 1:
			{
				cout << "результат умножения равен: " << multiplic() << endl;
				system("pause");
				system("cls");
				break;
			}
			case 2:
			{
				cout << "результат деления = " << division() << endl;;
				system("pause");
				system("cls");
				break;
			}
			case 3:
			{
				cout << "результат суммирования = " << sum() << endl;
				system("pause");
				system("cls");
				break;
			}
			case 4:
			{
				cout << "разность = " << difference() << endl;
				system("pause");
				system("cls");
				break;
			}
			case 5:
			{
				matrices();
				break;
			}
			case 6:
			{
				a = 1;
				break;
			}
		}

	}
}