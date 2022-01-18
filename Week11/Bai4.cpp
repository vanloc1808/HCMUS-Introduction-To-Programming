#include <iostream>
#include <cmath>
using namespace std;

void swap(int& a, int& b)
{
	int temp = a;
	a = b;
	b = temp;
}

void sortAscending(int a[], int aLength)
{
	for (int i = 0; i < aLength; i++)
	{
		for (int j = i + 1; j < aLength; j++)
		{
			if (a[i] > a[j])
			{
				swap(a[i], a[j]);
			}
		}
	}
	cout << "After sorting: ";
	for (int i = 0; i < aLength; i++)
	{
		cout << a[i] << " ";
	}
}

void findMinDistance(int a[], int aLength, int x)
{
	if (x < a[0])
	{
		cout << "Vi tri gan x nhat la: " << a[0];
	}
	else if (x > a[aLength - 1])
	{
		cout << "Vi tri gan x nhat la: " << a[aLength - 1];
	}
	else 
	{
		int minDistance = abs(a[0] - x);
		int i;
		for (i = 1; i < aLength; i++)
		{
			int tempDistance = abs(a[i] - x);
			if (tempDistance > minDistance)
			{
				break;
			}
			else
			{
				minDistance = tempDistance;
			}
		}
		int b[100], j = 0;
		for (int i = 0; i < aLength; i++)
		{
			int tempDistance = abs(a[i] - x);
			if (tempDistance == minDistance)
			{
				b[j] = a[i];
				j++;
			}
		}
		cout << "Cac phan tu trong mang thoa man de bai la: ";
		for (int k = 0; k < j; k++)
		{
			cout << b[k] << " ";
		}
	}

}

int main()
{
	int a[100];
	int aLength;
	cout << "Nhap so phan tu cua a: ";
	cin >> aLength;
	cout << "Nhap cac phan tu cua a: ";
	for (int i = 0; i < aLength; i++)
	{
		cin >> a[i];
	}
	sortAscending(a, aLength);
	cout << "\n";
	int x;
	cout << "Nhap so x: ";
	cin >> x;
	findMinDistance(a, aLength, x);
}
	



