#include <iostream>
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

int main()
{
	double x;
	int n;
	cout << "Nhap gia tri x: ";
	cin >> x;
	cout << "Nhap gia tri n: ";
	cin >> n;
	cout << "Luy thua " << x << "^" << n << " la: " << powerNOfX(x, n);
	return 1;
}


