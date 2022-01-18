#include <iostream>
using namespace std;
int main()
{
	int n, i, j;
	double x;
	double S1, S2;
	j = 0; S1 = 0; S2 = 0;
	cout << "Nhap vao so x: ";
	cin >> x;
	cout << "Nhap vao so nguyen duong n: ";
	cin >> n;
	//tinh bang vong for
	for (i = 0; i <= n; i++)
	{
		S1 += pow(x, (2 * i + 1));
	}
	cout << "Tong can tim tinh bang vong lap for la: " << S1 << endl;
	//tinh bang vong while
	while (j <= n)
	{
		S2 += pow(x, (2 * j + 1));
		j++;
	}
	cout << "Tong can tim tinh bang vong lap while la: " << S2;
	return 0;
}