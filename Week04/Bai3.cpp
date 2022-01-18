#include <iostream>
using namespace std;
int main()
{
	int n, i;
	long long a, b, fn;
	cout << "Nhap so nguyen duong n: ";
	cin >> n;
	a = 0; b = 1;
	for (i = 2; i <= n; i++)
	{
		fn = a + b;
		a = b;
		b = fn;
	}
	cout << "So Fibonacci thu n la: " << fn;
	return 0;
}