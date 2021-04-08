#include<iostream>
using namespace std;

int min_el_position(int arr[], int n) {
	int min_el = arr[0];
	int min_position = 0;

	for (int i = 0; i < n; i++) {
		if (min_el > arr[i]) {
			min_el = arr[i];
			min_position = i;
		}
	}
	return min_position;
}

int max_el_position(int arr[], int n) {
	int max_el = arr[0];
	int max_position = 0;

	for (int i = 0; i < n; i++) {
		if (max_el < arr[i]) {
			max_el = arr[i];
			max_position = i;
		}
	}
	return max_position;
}

void sum_el_of_array(int arr[], int n, int index_1, int index_2) {
	int temp = max_el_position(arr, n) + min_el_position(arr, n);
	cout << temp;
}

void read_array(int arr[], int n) {
	for (int i = 0; i < n; i++) {
		cout << "a[" << i << "] = ";
		cin >> arr[i];
	}
}

void print_array(int arr[], int n) {
	for (int i = 0; i < n; i++) {
		cout << arr[i] << " ";
	}
}

void main() {
	int n, min_index, max_index;
	cout << "Enter n = ";
	cin >> n;
	int arr[100];

	read_array(arr, n);
	
	print_array(arr, n);
	min_index = min_el_position(arr, n);
	max_index = max_el_position(arr, n);
	cout << endl;
	 sum_el_of_array(arr, n, min_index, max_index);
	//print_array(arr, n);
}


