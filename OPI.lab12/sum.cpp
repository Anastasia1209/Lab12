#include<iostream>
using namespace std;
double sum() {
	setlocale(LC_CTYPE, "ru");
	double length, sum = 0;
	cout << "введите количество элементов,которые неоходимо перемножить: ";
	cin >> length;
	int* arr = new int[length];
	cout << "введите цифры,которые необходимо перемножить: ";
	for (int i = 0; i < length; i++)
	{
		cin >> arr[i];
	}
	for (int i = 0; i < length; i++)
	{
		sum += arr[i];
	}
	delete arr;
	return sum;
}