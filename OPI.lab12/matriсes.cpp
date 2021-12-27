#include<iostream>
using namespace std;
int determinant();
int multiplication();
int transponirovanie();
int sumOfMatrices();
int examinationOfSwitch(int& option);
void matrices() {
	int option = 0;
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
		examinationOfSwitch(option);
		printf("успешно!");
			switch (option)
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
				int determinant();
				break;
			}
			case 5: {
				b = false;
			}
		}
	}
}