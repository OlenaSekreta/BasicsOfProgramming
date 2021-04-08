/*
#include<iostream>
using namespace std;

int** create_matrix(int n, int m) {
	int** matrix;
	matrix = new int* [n];

	for (int i = 0; i < m; i++) {
		matrix[i] = new int[m];
	}
	return matrix;
}

void delete_matrix(int** matrix, int n) {
	for (int i = 0; i < n; i++) {
		delete[] matrix[i];  //!!!!!!!!!!!!!!!
	}
	delete[] matrix;
}

int** input_matrix(int n, int m) {
	int** matrix = create_matrix(n, m);

	for (int i = 0; i < n; i++) {
		for (int j = 0; j < m; j++) {
			cout << "a[" << i << "][" << j << "] = ";
			cin >> matrix[i][j];
		}
	}
	return matrix;
}

void output_matrix(int** matrix, int n, int m) {
	cout << "Matrix : " << endl;
	for (int i = 0; i < n; i++) {
		for (int j = 0; j < m; j++) {
			cout << matrix[i][j] << "\t";
		}
		cout << endl;
	}
}

void test_sum_matrixs() {
	int n, m;
	cout << "Enter size of matrix: " << endl;
	cout << "n = ";
	cin >> n;
	cout << "m = ";
	cin >> m;
	int** matrix1 = input_matrix(n, m);
	//int** matrix2 = input_matrix(n, n);

	output_matrix(matrix1, n, m);
	//output_matrix(matrix2, n, n);
}

void reverseMatrix() {

}

void main() {
	test_sum_matrixs();
}

#include <iostream>
#include <cstdlib>
using namespace std;

int** create_matrix(int n, int m) {
	int** matrix;
	matrix = new int* [n];

	for (int i = 0; i < m; i++) {
		matrix[i] = new int[m];
	}
	return matrix;
}

void delete_matrix(int** matrix, int n) {
	for (int i = 0; i < n; i++) {
		delete[] matrix[i];
	}
	delete[] matrix;
}

int** input_matrix(int n, int m) {
	int** matrix = create_matrix(n, m);

	for (int i = 0; i < n; i++) {
		for (int j = 0; j < m; j++) {
			cout << "a[" << i << "][" << j << "] = ";
			cin >> matrix[i][j];
		}
	}
	return matrix;
}

void output_matrix(int** matrix, int n, int m) {
	cout << "Matrix : " << endl;
	for (int i = 0; i < n; i++) {
		for (int j = 0; j < m; j++) {
			cout << matrix[i][j] << "\t";
		}
		cout << endl;
	}
}

void diag(int** matrix, int n, int m) {

	int** tmp = create_matrix(n, m);
	for (int i = 0; i < n; i++)
	{
		cout << endl;
		for (int j = 0; j < m; j++)
		{
			matrix[i][j] = tmp[i][j];
			cout << matrix[i][j] << " ";
		}
	}
}

void bufer(int** matrix, int n, int m) {

	int** tmp = create_matrix(n, m);

	for (int i = 0; i < n; i++)
	{
		for (int j = 0; j < m; j++)
		{
			tmp[i][j] = matrix[n - i - 1][m - j - 1];
		}
	}
}

void test_sum_matrixs() {
	int n, m;
	cout << "Enter size of matrix: " << endl;
	cout << "n = ";
	cin >> n;
	cout << "m = ";
	cin >> m;
	int** matrix = input_matrix(n, m);

	output_matrix(matrix, n, m);
	bufer(matrix, n, m);
	diag(matrix, n, m);
	output_matrix(matrix, n, m);
}


int main()
{
	test_sum_matrixs();
}
*/



#include <iostream>
using namespace std;

int main() {

	int m[2][2];

	for (int i = 0; i < 2; i++) {
		for (int j = 0; j < 2; j++) {
			cout << "a[" << i << "][" << j << "] = ";
			cin >> m[i][j];
		}
	}
	for (int i = 0; i < 2; ++i) {
		int buf;
		buf = m[i][i];
		m[i][i] = m[i][1 - i];
		m[i][1 - i] = buf;
	}

	for (int i = 0; i < 2; ++i) {
		for (int j = 0; j < 2; ++j)
			cout << m[i][j] << ' ';
		cout << endl;
	}
	return 0;
}