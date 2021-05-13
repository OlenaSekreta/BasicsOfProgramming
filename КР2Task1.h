
#pragma once
#define SIZE 50


struct Worker
{
	char Name[SIZE];
	int Salary;
	char Department[SIZE];
	int Experience;


	Worker(const char* name = "", int salary = 1234,const char* department = "", int experience =1234);
	void PrintInfo();

};
