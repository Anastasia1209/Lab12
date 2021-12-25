#include<iostream>
using namespace std;
int opredelitel();
int multiplication();
int transponirovanie();
int sumOfMatrices();
void matrices() {
	int a = 0;
	bool b = true;
	while (b == true)
	{
		int z;
		cout << "##########################$$##########################" << endl;
		cout << "^^  Выберите действие,которое необходимо выполнить: &&" << endl;
		cout << "&&  1.Транспонирование                              ^^" << endl;
		cout << "&&  2.Суммирование с другой матрицей                ^^" << endl;
		cout << "^^  3.умножение с другой матрицей                   &&" << endl;
		cout << "^^  4.Вычисление определителя                       &&" << endl;
		cout << "&&  5.Выход из подменю :(                           ^^" << endl;
		cout << "######################################################" << endl;
		cout << "\nВыберите действие калькулятора: ";
		while (true)
		{
				if (!(cin >> a))
				{
					cin.clear();
					while (cin.get() != '\n');
					cout << "Эй, тут должно быть число" << endl;
				}
				else if (a < 1 || a > 5)
					cout << "Не то число!" << endl;
				else
					break;
			}
			switch (a)
			{
			case 1: {
				transponirovanie();
				system("pause");
				system("cls");
				break;
			}
			case 2: {
				sumOfMatrices();
				system("pause");
				system("cls");
				break;
			}
			case 3: {
				multiplication();
				system("pause");
				system("cls");
			}
			case 4:
			{
				break;
			}
			case 5: {
				b = false;
			}
		}
	}
}