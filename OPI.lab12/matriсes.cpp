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
		cout << "^^  �������� ��������,������� ���������� ���������: &&" << endl;
		cout << "&&  1.����������������                              ^^" << endl;
		cout << "&&  2.������������ � ������ ��������                ^^" << endl;
		cout << "^^  3.��������� � ������ ��������                   &&" << endl;
		cout << "^^  4.���������� ������������                       &&" << endl;
		cout << "&&  5.����� �� ������� :(                           ^^" << endl;
		cout << "######################################################" << endl;
		cout << "\n�������� �������� ������������: ";
		examinationOfSwitch(option);
		printf("�������!");
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