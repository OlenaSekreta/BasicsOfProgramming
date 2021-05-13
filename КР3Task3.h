#pragma once
#define SIZE 50


struct Triangle
{
	int Side1;
	int Side2;
	int Side3;


	Triangle(int side1 = 3, int side2 = 4, int side3 = 5);
	void PrintInfo();
	void Perimeter();
};
