#include <iostream>
using namespace std;
int main()
{
	int n, i, j;
	double S1, S2;
	cout << "Nhap vao so nguyen duong n: ";
	cin >> n;
	j = 1;
	S1 = 0; S2 = 0;
	//tinh bang vong for
	for (i = 1; i <= n; i++)
	{
		S1 += (double(i)) / (i + 1);
	}
	cout << "Tong can tim tinh bang vong lap for la " << S1 << endl;
	//tinh bang vong while
	while (j <= n)
	{
		S2 += (double(j)) / (j + 1);
		j++;
	}
	cout << "Tong can tim tinh bang vong lap while la " << S2;
	return 0;
}