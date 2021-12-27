#include<iostream>
using namespace std;
int examinationOfSwitch(int &option) {
	while (true)
	{
		if (!(cin >> option))
		{
			cin.clear();
			while (cin.get() != '\n');
			cout << "Ёй, тут должно быть число" << endl;
		}
		else if (option < 1 || option > 6)
			cout << "Ќе то число!" << endl;
		else
			break;
	}
	return option;
}