#include<iostream>
using namespace std;
double division() {
	setlocale(LC_CTYPE, "ru");
	double length, k = 0;
	double d;
	cout << "������� ���������� ���������,������� ��������� ��������� ���� �� �����: ";
	cin >> length;
	int* arr = new int[length];
	cout << "������� �����,������� ���������� ��������� ���� �� �����: ";
	for (int i = 0; i < length; i++)
	{
		cin >> arr[i];
		while(arr[i] == 0)
		{
			cout << "�� ���� ������ ������!��������,����������,������ �����: ";
			cin >> arr[i];
		}
		d = arr[0];
	}
	for (int i = 0; i < length-1; i++)
	{
		d /= arr[i+1];
	}
	delete arr;
	return d;
}