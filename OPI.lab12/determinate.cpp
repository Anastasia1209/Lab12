#include <iostream>

using namespace std;



int** submatrix(int** matrix, unsigned int n, unsigned int x, unsigned int y) {
    int** submatrix = new int* [n - 1];
    int subi = 0;
    for (int i = 0; i < n; i++) {
        submatrix[subi] = new int[n - 1];
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

int determinant(int** matrix, unsigned int n) {
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
    cout << "Введите размер квадратной матрицы: " << endl;
    cin >> n;
    cout << "Введите матрицу: " << endl;
    int** matrix = new int* [n];
    for (int i = 0; i < n; ++i) {
        matrix[i] = new int[n];
        for (int j = 0; j < n; ++j) {
            cin >> matrix[i][j];
        }
    }
    cout << "Определитель матрицы равен: ";
    cout << determinant(matrix, n);

    return 0;
}