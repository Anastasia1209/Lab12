#include<iostream>
using namespace std;
double difference() {
	setlocale(LC_CTYPE, "ru");
	double length, sum;
	cout << "введите количество элементов,разность которых необходимо найти: ";
	cin >> length;
	int* arr = new int[length];
	cout << "введите цифры,разность которых необходимо найти: ";
	for (int i = 0; i < length; i++)
	{
		cin >> arr[i];
		sum = arr[0];
	}
	for (int i = 0; i < length; i++)
	{
		sum -= arr[i];
	}
	delete arr;
	return sum;
}