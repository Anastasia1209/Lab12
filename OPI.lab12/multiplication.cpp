#include <iostream>

using namespace std;

int examinationOfSwitch(int&);
int examinationOfNumber(int&);

int multiplication()
{
    setlocale(LC_CTYPE, "rus");
    
    // Инициализация матриц
    int rowA, columnA, rowB, columnB, rowC, columnC;
    cout << "Введите количество строк первой матрицы: "; examinationOfSwitch(rowA);
    cout << "Введите количество столбцов первой матрицы: "; examinationOfSwitch(columnA);
    rowB = columnA;
    cout << "Количество строк второй матрицы: " << rowB << endl;
    cout << "Введите количество столбцов второй матрицы: "; examinationOfSwitch(columnB);
    if (rowA > rowB) rowC = rowA;
    else rowC = rowB;
    if (columnA > columnB) columnC = columnA;
    else columnC = columnB;
    int* A = new int[rowA * columnA];
    int* B = new int[rowB * columnB];
    int* C = new int[rowC * columnC];

    //Заполнение матриц A и B
    for (int i = 0; i < rowA * columnA; i++)
    {
        cout << "Введите a" << i / rowA + 1 << i % rowA + 1 << ": "; examinationOfNumber(A[i]);
    }
    for (int i = 0; i < rowB * columnB; i++)
    {
        cout << "Введите b" << i / rowB + 1 << i % rowB + 1 << ": "; examinationOfNumber(B[i]);
    }

    //Вычисление матрицы C
    for (int i = 0; i < rowC; i++)
    {
        for (int j = 0; j < columnC; j++)
        {
            *(C + (i * columnC) + j) = 0;
            for (int k = 0; k < rowB; k++)
            {
                *(C + (i * columnC) + j) += *(A + (i * columnA) + k) * *(B + (k * columnB) + j);
            }
        }
    }

    //Вывод
    for (int i = 0; i < rowA * columnA; i++)
    {
        cout << A[i] << '\t';
        if ((i + 1) % columnA == 0) cout << endl;
    }
    cout << '*' << endl;
    for (int i = 0; i < rowB * columnB; i++)
    {
        cout << B[i] << '\t';
        if ((i + 1) % columnB == 0) cout << endl;
    }
    cout << '=' << endl;
    for (int i = 0; i < rowC * columnC; i++)
    {
        cout << C[i] << '\t';
        if ((i + 1) % columnC == 0) cout << endl;
    }

    delete[] A;
    delete[] B;
    delete[] C;
    return 0;
}

int examinationOfNumber(int& option) {
    while (true)
    {
        if (!(cin >> option))
        {
            cin.clear();
            while (cin.get() != '\n');
            cout << "Эй, тут должно быть число" << endl;
        }
        else if (option < -100 || option > 100)
            cout << "Не то число!" << endl;
        else
            break;
    }
    return option;
}