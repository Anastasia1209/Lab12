#include <iostream>
#include <time.h>

using namespace std;

//Функция выделения памяти для матрицы
int** InitMatrix(int n, int m)
{
	int** Matrix = new int* [n];
	for (int i = 0; i < n; i++)
		Matrix[i] = new int[m];
	return Matrix;
}

//Функция освобождения памяти для матрицы
void DeleteMatrix(int** Matrix, int n, int m)
{
	for (int i = 0; i < n; i++)
		delete[] Matrix[i];
	delete[] Matrix;
}

//Функция транспонирования матрицы
int** TranspMatrix(int** Matrix, int& n, int& m)
{
	int** tMatrix = InitMatrix(m, n);

	for (int i = 0; i < m; i++)
		for (int j = 0; j < n; j++)
			tMatrix[i][j] = Matrix[j][i];
	int temp = n;
	n = m;
	m = temp;

	return tMatrix;
}

//Функция вывода матрицы на экран
void PrintMatrix(int** Matrix, int n, int m)
{
	for (int i = 0; i < n; i++)
	{
		for (int j = 0; j < m; j++)
			cout << Matrix[i][j] << " ";
		cout << endl;
	}
}

//Основная функция программы
void main(void)
{
	setlocale(LC_ALL, "Russian"); //Установим локаль в .1251
	srand(time(NULL)); //Инициализация генератора случайно величины
	int n, m; //размерность матрицы
	int** Matrix; //Наша матрица
	cout << "Введите кол-во строк в матрицы n = ";
	cin >> n; //Введем n
	cout << "Введите кол-во столбцов матрицы m = ";
	cin >> m; //Введем m
	Matrix = InitMatrix(n, m); //Выделим память для матрицы

	//Заполним матрицу случайными величинами
	for (int i = 0; i < n; i++)
		for (int j = 0; j < m; j++)
			Matrix[i][j] = rand() % 100;

	cout << "Получена Матрица:" << endl;
	PrintMatrix(Matrix, n, m); //Выведим на экран матрицу

	Matrix = TranspMatrix(Matrix, n, m); //Транспонирование матрицы

	cout << endl << "Транспонированная матрица:" << endl;
	PrintMatrix(Matrix, n, m);
	DeleteMatrix(Matrix, n, m); //Очистим память матрицы

}