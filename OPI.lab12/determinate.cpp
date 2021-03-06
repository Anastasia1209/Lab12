#include <iostream>

using namespace std;

int examinationOfSwitch(int& option);

int fillingOfMatrix(float** array, int& rows, int& columns);

float** submatrix(float** matrix, unsigned int n, unsigned int x, unsigned int y) {
	float** submatrix = new float* [n - 1];
	int subi = 0;
	for (int i = 0; i < n; i++) {
		submatrix[subi] = new float[n - 1];
		int subj = 0;
		if (i == y) {
			continue;
		}
		for (int j = 0; j < n; j++) {
			if (j == x) {
				continue;
			}
			submatrix[subi][subj] = matrix[i][j];
			subj++;
		}
		subi++;
	}
	return submatrix;
}

float determinant(float** matrix, unsigned int n) {
	int det = 0;
	if (n == 2) {
		return matrix[0][0] * matrix[1][1] - matrix[1][0] * matrix[0][1];
	}
	for (int x = 0; x < n; ++x) {
		det += ((x % 2 == 0 ? 1 : -1) * matrix[0][x] * determinant(submatrix(matrix, n, x, 0), n - 1));
	}

	return det;
}

int determinant() {
	setlocale(LC_ALL, "rus");
	int n;
	cout<< "Введите размер квадратной матрицы: " << endl;
	examinationOfSwitch(n);
	float** matrix = new float* [n];
	for (int i = 0; i < n; i++)
	{
		matrix[i] = new float[n];
	}
	cout<< "Введите матрицу: " << endl;
	fillingOfMatrix(matrix, n, n);
	cout << "Определитель матрицы равен: ";
	cout << determinant(matrix, n);
	printf("\n");
	for (int i = 0; i < n; i++)
	{
		delete[]matrix[i];
	}
	delete matrix;

	return 0;
}