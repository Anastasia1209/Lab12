#include <iostream>

using namespace std;

int main() {
    setlocale(LC_ALL, "rus");
    int n;
    double d;
    cout << "Введите размер матрицы:\n";
    cout << "n = ";
    cin >> n;
    double** a = new double* [n];
    for (int i = 0; i < n; i++) {
        a[i] = new double[n];
    }
    cout << "Введите матрицу:\n";
    for (int i = 0; i < n; i++) {
        for (int j = 0; j < n; j++) {
            cin >> a[i][j];
        }
    }
   
    cout.precision(2);
    for (int i = 0; i < n; i++) {
        for (int j = 0; j < n; j++) {
            cout.width(8);
            cout << fixed << a[i][j] << " ";
        }
        cout << "\n";
    }
    d = 1;
    for (int i = 0; i < n; i++) {
        d *= a[i][i];
    }
    cout << fixed << "\nОпределитель матрицы: " << d << "\n";
    for (int i = 0; i < n; i++) {
        delete[] a[i];
    }
    delete[] a;
    system("pause");
    return 0;
}