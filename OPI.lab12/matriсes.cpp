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
		cout << "^^  �������� ��������,������� ���������� ���������: &&" << endl;
		cout << "&&  1.����������������                              ^^" << endl;
		cout << "&&  2.������������ � ������ ��������                ^^" << endl;
		cout << "^^  3.��������� � ������ ��������                   &&" << endl;
		cout << "^^  4.���������� ������������                       &&" << endl;
		cout << "&&  5.����� �� ������� :(                           ^^" << endl;
		cout << "######################################################" << endl;
		cout << "\n�������� �������� ������������: ";
		while (true)
		{
				if (!(cin >> a))
				{
					cin.clear();
					while (cin.get() != '\n');
					cout << "��, ��� ������ ���� �����" << endl;
				}
				else if (a < 1 || a > 5)
					cout << "�� �� �����!" << endl;
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