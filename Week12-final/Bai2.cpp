#include <iostream>
using namespace std;

void findMaxDistance(int a[], int n)
{
	int maxValue = 0;
	int tempI = 0;
	int tempJ = 1;
	for (int i = 0; i < n; i++)
	{
		for (int j = i + 1; j < n; j++)
		{
			int temp = abs(a[j] - a[i]);
			if (temp > maxValue)
			{
				maxValue = temp;
				tempI = i;
				tempJ = j;
			}
		}
	}
	cout << "Cap chi so thoa man de bai la: " << tempI << " va " << tempJ << "\n";
}

int remove(int a[], int& n, int k)
{
	int temp = a[k];
	for (int i = k; i < n; i++)
	{
		a[i] = a[i + 1];
	}
	n -= 1;
	return temp;
}

int findAnElement(int a[], int n, int x)
{
	int numberOfX = 0;
	int temp[100];
	for (int i = 0; i < n; i++)
	{
		if (a[i] == x)
		{
			temp[numberOfX] = i;
			numberOfX++;
		}
	}
	if (numberOfX == 0)
	{
		return -1;
	}
	else
	{
		return 1;
	}
}

void deleteCopies(int a[], int& n, int x)
{
	int numberOfX = 0;
	int temp[100];
	for (int i = 0; i < n; i++)
	{
		if (a[i] == x)
		{
			temp[numberOfX] = i;
			numberOfX++;
		}
	}
	cout << "Sau khi xoa \n";
	if (numberOfX == 1)
	{
		for (int i = 0; i < n; i++)
		{
			cout << a[i] << " ";
		}
	}
	else
	{
		for (int i = 1; i < numberOfX; i++)
		{
			remove(a, n, temp[i]);
			for (int j = 1; j <= i; j++)
			{
				temp[i + 1]--;
			}
		}
		for (int i = 0; i < n; i++)
		{
			cout << a[i] << " ";
		}
	}
}

int main()
{
	int a[100];
	int n;
	cout << "Nhap do dai day: ";
	cin >> n;
	cout << "Nhap cac phan tu cua day: ";
	for (int i = 0; i < n; i++)
	{
		cin >> a[i];
	}
	findMaxDistance(a, n);
	int k;
	cout << "Nhap vi tri phan tu can xoa: ";
	cin >> k;
	cout << "Phan tu da xoa la: " << remove(a, n, k) << "\n";
	int xFind;
	cout << "Nhap phan tu can tim: ";
	cin >> xFind;
	if (findAnElement(a, n, xFind) == -1)
	{
		cout << xFind << " khong co trong day" << "\n";
	}
	else
	{
		cout << xFind << " co trong day" << "\n";
	}
	int xDel;
	cout << "Nhap phan tu can xoa cac ban sao: ";
	cin >> xDel;
	deleteCopies(a, n, xDel);
	return 0;
}