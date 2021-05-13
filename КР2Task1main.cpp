//це кр 3!!
#include <iostream>
#include <fstream>
#include "КР2Task1.h"
using namespace std;
#define SIZE 50



void read_info(const char* fname, int& size, Worker*& persons)
{
	ifstream input(fname);

	input >> size;

	persons = new Worker[size];

	char name[SIZE];
	char department[SIZE];
	int experience;
	int salary;

	for (int i = 0; i < size; ++i) {
		try
		{
			input.get();
			input.get(name, SIZE, ',');
			input.get();
			input >> salary;
			input.get();
			input.get(department, SIZE, ',');
			input >> experience;
			persons[i] = Worker(name, salary, department, experience);
		}
		catch (const char* error)
		{
			cout << "Error: " << error << endl;
			i--;
			size--;
		}
		catch (...) {
			cout << "Error occured\n";
		}

	}
	input.close();
}


void write_to_console(Worker* persons, int size)
{
	for (int i = 0; i < size; ++i) {
		persons[i].PrintInfo();
	}
}



Worker& find_max_salary(Worker*& persons, int size)
{
	int max_salary = persons[0].Salary;
	Worker mostmoney = persons[0];
	for (int i = 1; i < size; ++i) {
		if (persons[i].Salary > max_salary) {
			max_salary = persons[i].Salary;
			mostmoney = persons[i];
		}

		return mostmoney;
	}
	
}




void sort_by_exp(Worker*& persons, int size)
{
	int max_exp = persons[0].Experience;
	for (int i = 1; i < size; i++) {
		for (int j = 0; j < size - i; j++) {
			if (persons[j].Experience > persons[j + 1].Experience)
				swap(persons[j].Experience, persons[j + 1].Experience);
		}
	}


}


void write_to_file(const char* fname, int& size, Worker*& persons)
{
	ofstream output(fname);
	output << size << endl;
	for (int i = 1; i <= size; ++i) {
		output << persons[i].Name << ' '
			<< persons[i].Salary << ' '
			<< persons[i].Department << ' '<< persons[i].Experience<< endl;
	}
	output.close();
}

void test_sort_output() {
	Worker* persons;
	int size;
	read_info("КР2Task1(in1).txt", size, persons);
	sort_by_exp(persons,size);
	write_to_file("КР2Task1(out1).txt", size, persons);
}


void test_find_max_salary()
{
	Worker* persons;
	int size;

	read_info("КР2Task1(in1).txt", size, persons);
	//write_to_console(persons, size);
	Worker mostmoney = find_max_salary(persons, size);
	cout << "Most money: ";
	mostmoney.PrintInfo();
}

int main()
{
	test_find_max_salary();

	test_sort_output();

}

//я шось не зовсім розумію чому воно не працює
//помилок нема, але програма не робить те що треба
//але функції всі є!!

