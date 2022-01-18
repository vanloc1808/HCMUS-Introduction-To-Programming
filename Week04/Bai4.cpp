#include <iostream>
using namespace std;
int main()
{
	int n, i;
	cout << "Nhap vao so nguyen duong n: ";
	cin >> n;
	cout << "Cac uoc nguyen duong cua " << n << " la: ";
	for (i = 1; i <= sqrt(n); i++)
	{
		if (n % i == 0)
		{
			if (i * i == n)
			{
				cout << i << " ";
			}
			else
			{
				cout << i << " " << n / i << " ";
			}
		}
	}
	cout << endl;
	int a, b;
	cout << "Nhap vao hai so nguyen duong can tim uoc chung lon nhat: ";
	cin >> a >> b;
	while (a != b)
	{
		if (a > b)
		{
			a -= b;
		}
		else
		{
			b -= a;
		}                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                   
	}
	cout << "Uoc chung lon nhat cua hai so da nhap la: " << a;
	return 0;
}