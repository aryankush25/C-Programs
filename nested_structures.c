#include<stdio.h>
#include<string.h>
#include<stdlib.h>

typedef struct
{
	int day;
	int month;
	int year;
	int contact;
}DOB;

typedef struct
{
	int lic;
	int adhar;
	int pan;
}IDENTITY;

typedef struct
{
	DOB dob;
	char name[20];
	char dept[10];
	int salary;
	IDENTITY ide;
}EMPLOYEE;

int main()
{
	EMPLOYEE emp;
	gets(emp.name);
	emp.ide.lic = 4465654;
	emp.ide.adhar = 546545;
	printf("%s\n",emp.name);
	printf("%d\n",emp.ide.lic);
	printf("%d\n",emp.ide.adhar);
}
