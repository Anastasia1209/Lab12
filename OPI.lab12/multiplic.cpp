#include<iostream>
using namespace std;
double multiplic() {
	setlocale(LC_CTYPE, "ru");
	double length,k=0,m=1;
	cout << "������� ���������� ���������,������� ��������� �����������: ";
	cin >> length;
	int* arr = new int[length];
	cout << "������� �����,������� ���������� �����������: ";
	for (int i = 0; i < length; i++)
	{
		cin >> arr[i];
	}
	for (int i = 0; i < length; i++)
	{
		m*=arr[i];
	}
	delete arr;
	return m;
}