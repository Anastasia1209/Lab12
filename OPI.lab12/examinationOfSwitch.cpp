#include<iostream>
using namespace std;
int examinationOfSwitch(int &option) {
	while (true)
	{
		if (!(cin >> option))
		{
			cin.clear();
			while (cin.get() != '\n');
			cout << "��, ��� ������ ���� �����" << endl;
		}
		else if (option < 1 || option > 6)
			cout << "�� �� �����!" << endl;
		else
			break;
	}
	return option;
}