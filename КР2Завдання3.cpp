/*#include<iostream>
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
void change(int** matrix, int n, int m) {


	for (int i = 0; i < n; i++)
	{
		for (int j = m - 1; j > -1; j--)
		{

			cout << matrix[i][j] << "  ";
		}
		cout << endl;
	}
}
void test_sum_matrixs() {
	int n;
	cout << "Enter size of matrix: " << endl;
	cout << "n = ";
	cin >> n;

	int** matrix = input_matrix(n, n);
	output_matrix(matrix, n, n);
	change(matrix, n, n);




	

	delete_matrix(matrix, n);
}
int main() {
	test_sum_matrixs();

}*/