#include<iostream>
using namespace std;

int examinationOfSwitch(int& option);

int fillingOfMatrix(float** array, int& rows, int& columns);

int transponirovanie() {
	setlocale(LC_CTYPE, "ru");
	int rows, columns;
	float tmp;

	cout << "\nвведите количество строк и столбцов: ";
	examinationOfSwitch(rows);
	columns = rows;

	float** array = new float* [rows];
	for (int i = 0; i < rows; i++)
	{
		array[i] = new float[columns];
	}

	cout << "введите элементы матрицы,но учтите,что заполнение происходит слева на право." << endl;
	fillingOfMatrix(array, rows,columns);
	system("cls");

	cout << "матрица:";
	for (int i = 0; i < rows;i++)
	{
		cout << "\n";
		for (int j = 0;j < columns;j++)
		{
			cout <<"a("<<i<<","<<j<<")=" << array[i][j]<<"\t";
		}
	}

	for (int i = 0; i < rows; i++)
	{
		for (int j = 0; j < columns; j++)
		{
			tmp = array[i][j];
			array[i][j] = array[j][i];
			array[j][i] = tmp;
		}
	}

	cout << "\n\n\nтранспонированная матрица: ";
	for (int i = 0; i < rows;i++)
	{
		cout << "\n";
		for (int j = 0;j < columns;j++)
		{
			cout << "a(" << i << "," << j << ")=" <<array[j][i] << "\t";
		}
	}

	cout << "\n\n\n";

	for (int i = 0; i < rows; i++)
	{
		delete[]array[i];
	}
	delete array;
	return 0;
}