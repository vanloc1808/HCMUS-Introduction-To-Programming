#include <iostream>
using namespace std;
void MaxOfTwoValues(int a, int b)
{
	int Max = a;
	if (b > Max)
	{
		Max = b;
	}
	cout << "So lon nhat trong hai so da nhap la " << Max << endl;
}
void MinOfThreeValues(int a, int b, int c)
{
	int Min = a;
	if (Min > b)
	{
		Min = b;
	}
	if (Min > c)
	{
		Min = c;
	}
	cout << "So nho nhat trong hai so da nhap la " << Min << endl;
}
int main()
{
	int max1, max2;
	cout << "Nhap hai so can tim gia tri lon nhat: ";
	cin >> max1 >> max2;
	MaxOfTwoValues(max1, max2);
	cout << "Nhap ba so can tim gia tri nho nhat: ";
	int min1, min2, min3;
	cin >> min1 >> min2 >> min3;
	MinOfThreeValues(min1, min2, min3);
	return 0;
}