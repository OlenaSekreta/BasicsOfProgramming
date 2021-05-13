#include <iostream>
#include "ÊÐ2Task2.h"
using namespace std;
#define SIZE 50

Triangle::Triangle(int side1, int side2, int side3)
{


	if (side1 < 0) {
		throw "You cant work for free, can you?\n";
	}

	if (side2 < 0) {
		throw "There isnt a world where you can work -3 years, although i wish ther were one\n";
	}

	if (side3 < 0) {
		throw "There isnt a world where you can work -3 years, although i wish ther were one\n";
	}

	Side1 = side1;
	Side2 = side2;
	Side3 = side3;

}

void Triangle::PrintInfo()
{
	cout << "Triangle: " << Side1 << " " << Side2 << " " << Side3 << endl;
}

void Triangle::Perimeter()
{
	int per = Side1 + Side2 + Side3;
	cout << "Perimeter = " << per;
}