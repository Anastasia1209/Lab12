#include<iostream>
using namespace std;
void matrices();
double multiplic();
double division();
double sum();
double difference();
void main() {
	setlocale(LC_CTYPE, "RUSSIAN");
	int option = 0, a = 0;
	while (a != 1)
	{
		cout << "___________________________$$_________________________" << endl;
		cout << "||  �������� ��������,������� ���������� ���������: ||" << endl;
		cout << "||  1.��������� �����                               ||" << endl;
		cout << "||  2.������� �����                                 ||" << endl;
		cout << "||  3.�������� ������                               ||" << endl;
		cout << "||  4.��������� �����                               ||" << endl;
		cout << "||  5.�������� � ���������                          ||" << endl;
		cout << "||  6.�����                                         ||" << endl;
		cout << "***************************&&***********************" << endl;
		cout << "\n�������� �������� ������������: ";
		while (true)
		{
			if (!(cin >> option))
			{
				cin.clear();
				while (cin.get() != '\n');
				cout << "��, ��� ������ ���� �����" << endl;
			}
			else if (option < 1 || option > 7)
				cout << "�� �� �����!" << endl;
			else
				break;
		}
		cout << "������� !" << endl;
		switch (option)
		{
			case 1:
			{
				cout << "��������� ��������� �����: " << multiplic() << endl;
				system("pause");
				system("cls");
				break;
			}
			case 2:
			{
				cout << "��������� ������� = " << division() << endl;;
				system("pause");
				system("cls");
				break;
			}
			case 3:
			{
				cout << "��������� ������������ = " << sum() << endl;
				system("pause");
				system("cls");
				break;
			}
			case 4:
			{
				cout << "�������� = " << difference() << endl;
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