#include <iostream>
using namespace std;
int main()
{
	int n, i, j;
	long long S1, S2;
	cout << "Nhap vao so nguyen duong n: ";
	cin >> n;
	j = 1;
	S1 = 1; S2 = 1;
	//tinh bang vong for
	for (i = 1; i <= n; i++)
	{
		S1 *= i;
	}
	cout << "Tich can tim tinh bang vong lap for la: " << S1 << endl;
	//tinh bang vong lap while
	while (j <= n)
	{
		S2 *= j;
		j++;
	}
	cout << "Tong can tim tinh bang vong lap while la: " << S2;
	return 0;
}