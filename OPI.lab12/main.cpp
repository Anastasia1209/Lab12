#include<iostream>
using namespace std;
int transponirovanie();
int multiplication();
int division();
int sum();
int difference();
int opredelitel();
void main() {
	setlocale(LC_CTYPE, "RUSSIAN");

	int option=0, a = 0;
	while (a != 1)
	{
		cout << "_______________________&&___________________________" << endl;
		cout << "||�������� ��������,������� ���������� ���������: ||" << endl;
		cout << "||1.��������� ���� �����                          ||" << endl;
		cout << "||2.������� ���� �����                            ||" << endl;
		cout << "||3.�������� ���� ������                          ||" << endl;
		cout << "||4.��������� ���� �����                          ||" << endl;
		cout << "||5.���������������� �������                      ||" << endl;
		cout << "||6.������������ �������                          ||" << endl;
		cout << "||7.����� �� ���������                            ||" << endl;
		cout << "****************************************************" << endl;
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
		switch (option) {
			/*	case 1:
				{
					multiplication();
					system("pause");
					system("cls");
					break;
				}
				case 2:
				{
					division();
					system("pause");
					system("cls");
					break;
				}
				case 3:
				{
					sum();
					system("pause");
					system("cls");
					break;
				}
				case 4:
				{
					difference();
					system("pause");
					system("cls");
					break;
				}*/
		case 5:
		{
			transponirovanie();
			system("pause");
			system("cls");
			break;
		}
		/*case 6:
		{
			opredelitel();
			system("pause");
			system("cls");
			break;
		}*/
		case 7:
		{
			a = 1;
			break;
		}
		}

	}
}
