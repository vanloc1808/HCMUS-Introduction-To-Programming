#include <iostream>
using namespace std;
void ArrangeInAscendingOrder(int a, int b, int c)
{
	int Max = a;
	if (b > Max)
	{
		Max = b;
	}
	if (c > Max)
	{
		Max = c;
	}
	int Min = a;
	if (b < Min)
	{
		Min = b;
	}
	if (c < Min)
	{
		Min = c;
	}
	if (Max == a)
	{
		if (Min == b)
		{
			cout << b << " " << c << " " << a;
		}
		else
		{
			cout << c << " " << b << " " << a;
		}
	}
	else if (Max == b)
	{
		if (Min == a)
		{
			cout << a << " " << c << " " << b;
		}
		else
		{
			cout << c << " " << a << " " << b;
		}
	}
	else
	{
		if (Min == a)
		{
			cout << a << " " << b << " " << c;
		}
		else
		{
			cout << b << " " << a << " " << c;
		}
	}
}

int main()
{
	int a, b, c;
	cout << "Nhap ba so can sap xep tang dan: ";
	cin >> a >> b >> c;
	ArrangeInAscendingOrder(a, b, c);
	return 0;
}