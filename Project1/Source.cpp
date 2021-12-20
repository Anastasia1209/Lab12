#include <iostream>
#include <time.h>

using namespace std;

//������� ��������� ������ ��� �������
int** InitMatrix(int n, int m)
{
	int** Matrix = new int* [n];
	for (int i = 0; i < n; i++)
		Matrix[i] = new int[m];
	return Matrix;
}

//������� ������������ ������ ��� �������
void DeleteMatrix(int** Matrix, int n, int m)
{
	for (int i = 0; i < n; i++)
		delete[] Matrix[i];
	delete[] Matrix;
}

//������� ���������������� �������
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

//������� ������ ������� �� �����
void PrintMatrix(int** Matrix, int n, int m)
{
	for (int i = 0; i < n; i++)
	{
		for (int j = 0; j < m; j++)
			cout << Matrix[i][j] << " ";
		cout << endl;
	}
}

//�������� ������� ���������
void main(void)
{
	setlocale(LC_ALL, "Russian"); //��������� ������ � .1251
	srand(time(NULL)); //������������� ���������� �������� ��������
	int n, m; //����������� �������
	int** Matrix; //���� �������
	cout << "������� ���-�� ����� � ������� n = ";
	cin >> n; //������ n
	cout << "������� ���-�� �������� ������� m = ";
	cin >> m; //������ m
	Matrix = InitMatrix(n, m); //������� ������ ��� �������

	//�������� ������� ���������� ����������
	for (int i = 0; i < n; i++)
		for (int j = 0; j < m; j++)
			Matrix[i][j] = rand() % 100;

	cout << "�������� �������:" << endl;
	PrintMatrix(Matrix, n, m); //������� �� ����� �������

	Matrix = TranspMatrix(Matrix, n, m); //���������������� �������

	cout << endl << "����������������� �������:" << endl;
	PrintMatrix(Matrix, n, m);
	DeleteMatrix(Matrix, n, m); //������� ������ �������

}