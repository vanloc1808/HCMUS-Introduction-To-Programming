#include <iostream>
using namespace std;

double sumWithRecursion(int n)
{
	if (n == 1)
	{
		return 1;
	}
	else
	{
		return sqrt(n + sumWithRecursion(n - 1));
	}
}

double sumWithoutRecursion(int n)
{
	double sum = 0;
	for (int i = 1; i <= n; i++)
	{
		sum = sqrt(i + sum);
	}
	return sum;
}

int main()
{
	int n;
	cout << "Nhap gia tri n: ";
	cin >> n;
	cout << "Tong can tim tinh bang de quy la: " << sumWithRecursion(n);
	cout << "\n";
	cout << "Tong can tim tinh khong dung de quy la: " << sumWithoutRecursion(n);
	return 3;
}


