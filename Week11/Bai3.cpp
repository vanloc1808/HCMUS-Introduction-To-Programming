#include <iostream>
#include <cmath>
using namespace std;

double powerNOfX(double x, int n)
{
	if (n == 0)
	{
		return 1;
	}
	else
	{
		return x * powerNOfX(x, n - 1);
	}
}

int countRequirement(int x[], int xLength, int y[], int yLength)
{
	int count = 0;
	for (int i = 0; i < xLength; i++)
	{
		for (int j = 0; j < yLength; j++)
		{
			if (powerNOfX(x[i], y[j]) > powerNOfX(y[j], x[i]))
			{
				count++;
			}
		}
	}
	return count;
}

struct numberPair
{
	int x;
	int y;
};

void saveRequirement(int x[], int xLength, int y[], int yLength)
{
	numberPair a[100];
	int count = 0;
	for (int i = 0; i < xLength; i++)
	{
		for (int j = 0; j < yLength; j++)
		{
			if (powerNOfX(x[i], y[j]) > powerNOfX(y[j], x[i]))
			{
				a[count].x = x[i]; 
				a[count].y = y[j];
				count++;
			}
		}
	}
	cout << "Cac cap so x, y thoa man de bai la: ";
	cout << "\n";
	for (int i = 0; i < count; i++)
	{
		cout << "x = " << a[i].x << " y = " << a[i].y;
		cout << "\n";
	}
}

int main()
{
	int x[100], y[100];
	int xLength, yLength;
	cout << "Nhap so phan tu cua x: ";
	cin >> xLength;
	cout << "Nhap lan luot tung phan tu cua x: ";
	for (int i = 0; i < xLength; i++)
	{
		cin >> x[i];
	}
	cout << "Nhap so phan tu cua y: ";
	cin >> yLength;
	cout << "Nhap lan luot tung phan tu cua y: ";
	for (int i = 0; i < yLength; i++)
	{
		cin >> y[i];
	}
	cout << "So cac cap so thoa man de bai la: " << countRequirement(x, xLength, y, yLength);
	cout << "\n";
	saveRequirement(x, xLength, y, yLength);
	return 180802;
}



