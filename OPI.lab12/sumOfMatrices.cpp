#include <iostream>
using namespace std;
int sumOfMatrices() {
	setlocale(LC_ALL, "ru");
	int n, m;
	cout << "ввдеите кол-во строк:";
	cin >> n;
	cout << "введите кол-во столбцов:";
	cin >> m;
	int** matrix1 = new int* [n];
	int** matrix2 = new int* [n];
	int** matrix_sum = new int* [n];
	cout << "введите первую матрицу"<<endl;
	for (int i = 0; i < n; i++) {
		matrix1[i] = new int[n];
	}
	for (int i = 0; i < n; i++) {
		for (int j = 0; j < m; j++) {
			cin >> matrix1[i][j];
		}
	}
	cout <<endl;
	cout << "введите вторую матрицу"<<endl;
	for (int i = 0; i < n; i++) {
		matrix2[i] = new int[n];
	}
	for (int i = 0; i < n; i++) {
		for (int j = 0; j < m; j++) {
			cin >> matrix2[i][j];
		}
	}
	cout << endl;
	cout << "результат сложения двух матриц"<<endl;
	for (int i = 0; i < n; i++) {
		for (int j = 0; j < m; j++) {
			matrix_sum[i] = new int[n];
			matrix_sum[i][j] = matrix1[i][j] + matrix2[i][j];
			cout << matrix_sum[i][j] << " ";
		}
		cout << endl;
	}
	return 0;
}
