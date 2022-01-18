#include <iostream>
using namespace std;
bool IsPrime(int n)
{
	if (n == 1)
	{
		return false;
	}
	if (n == 2 || n == 3)
	{
		return true;
	}
	for (int i = 2; i <= sqrt(n); i++)
	{
		if (n % i == 0)
		{
			return false;
		}
	}
	return true;
}
int main()
{
	int n;
	cout << "Nhap mot so can kiem tra so nguyen to: ";
	cin >> n;
	if (IsPrime(n) == false)
	{
		cout << n << " khong phai la so nguyen to." << endl;
	}
	else
	{
		cout << n << " la so nguyen to." << endl;
	}
	int Sum = 2;
	for (int i = 3; i <= 49; i++)
	{
		if (IsPrime(i) == true)
		{
			Sum += i;
		}
	}
	cout << "Tong cac so nguye to trong 50 so nguyen duong dau tien la: " << Sum;
	return 0;
}