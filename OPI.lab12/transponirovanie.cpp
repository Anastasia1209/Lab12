#include<iostream>
using namespace std;
int transponirovanie() {
	setlocale(LC_CTYPE, "ru");
	int rows, columns,tmp;
	cout << "������� ���������� �����: ";
	cin >> rows;
	cout << "������� ���������� ��������: ";
	cin >> columns;
	int **tArray= new int* [rows];
	for (int i = 0; i < rows; i++)
	{
		tArray[i] = new int[columns];
	}
	int** array = new int* [rows];
	for (int i = 0; i < rows; i++)
	{
		array[i] = new int[columns];
	}
	cout << "������� �������� �������,�� ������,��� ���������� ���������� ����� �� �����." << endl;
	for (int i = 0; i < rows;i++)
	{
		for (int j = 0;j < columns;j++)
		{
			cin >> array[i][j];
		}
	}

	system("cls");

	cout << "�������:";
	for (int i = 0; i < rows;i++)
	{
		cout << "\n";
		for (int j = 0;j < columns;j++)
		{
			cout <<"a("<<i<<","<<j<<")=" << array[i][j]<<"\t";
		}
	}
	{
		for (int i = 0; i < rows; i++)
		{
			for (int j = 0; j < columns; j++)
			{
				tArray[i][j] = array[j][i];
				
			}
			int temp = rows;
			rows = columns;
			columns = temp;
		}
	}
	cout << "\n\n\n����������������� �������: ";
	for (int i = 0; i < rows;i++)
	{
		cout << "\n";
		for (int j = 0;j < columns;j++)
		{
			cout << "a(" << i << "," << j << ")=" << tArray[j][i] << "\t";
		}
	}
	cout << "\n\n\n";
	for (int i = 0; i < rows; i++)
	{
		delete[]array[i];
	}
	system("pause");
	delete array;
	return 0;
}