#include <iostream>
#include <string>
#include <string.h>
using namespace std;

const int level1 = 4; const float rate1 = 0;
const int level2 = 6; const float rate2 = 0.05;
const int level3 = 9; const float rate3 = 0.1;
const int level4 = 14; const float rate4 = 0.15;
const int level5 = 24; const float rate5 = 0.2;
const int level6 = 44; const float rate6 = 0.25;
const int level7 = 84; const float rate7 = 0.3;
const float rate8 = 0.35;
const float subtractPerPerson = 1.6;

int main()
{
	string fullName;
	int id, salary, peopleDepend;
	cout << "/*-- Nhap thong tin nguoi nop thue --*/";
	cout << "\n";
	cout << "Nhap ho ten: ";
	getline(cin, fullName);
	cout << "Nhap ma so: ";
	cin >> id;
	cout << "Nhap luong (don vi: trieu dong): ";
	cin >> salary;
	cout << "Nhap so nguoi phu thuoc: ";
	cin >> peopleDepend;
	float realSalary = salary - peopleDepend * subtractPerPerson;
	float tax;
	if (realSalary <= level1)
	{
		tax = rate1;
	}
	else if (realSalary <= level2)
	{
		tax = rate2 * realSalary;
	}
	else if (realSalary <= level3)
	{
		tax = rate3 * realSalary;
	}
	else if (realSalary <= level4)
	{
		tax = rate4 * realSalary;
	}
	else if (realSalary <= level5)
	{
		tax = rate5 * realSalary;
	}
	else if (realSalary <= level6)
	{
		tax = rate6 * realSalary;
	}
	else if (realSalary <= level7)
	{
		tax = rate7 * realSalary;
	}
	else
	{
		tax = rate8 * realSalary;
	}
	int taxPaid = tax * 1000000;
	cout << "\n";
	cout << "/*-- Thong tin nguoi nop thue --*/";
	cout << "\n";
	cout << "Ho ten: " << fullName;
	cout << "\n";
	cout << "Ma so: " << id << "\n";
	cout << "Tien thue: " << taxPaid << " dong";
	return 0;
}
