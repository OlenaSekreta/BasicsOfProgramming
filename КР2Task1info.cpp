
#include <iostream>
#include "ÊÐ2Task1.h"
using namespace std;
#define SIZE 50

Worker::Worker(const char* name, int salary, const char* department , int experience)
{

	strcpy_s(Name, SIZE, name);
	strcpy_s(Department, SIZE, department);

	if (salary < 0) {
		throw "You cant work for free, can you?\n";
	}

	if (experience < 0) {
		throw "There isnt a world where you can work -3 years, although i wish ther were one\n";
	}


	Salary = salary;
	Experience = experience;

}

void Worker::PrintInfo()
{
	cout << "Person: " << Name << " " << Salary << " salary "<<" department "<<Department<<" experience "<<Experience;
}
