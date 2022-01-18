#include <iostream>
using namespace std;
int main()
{
	int i, j, k;
	int S1, S2;
	j = 2; S1 = 0; S2 = 0;
	bool check;
	check = true;
	//tinh bang vong for
	for (i = 2; i <= 50; i++)
	{
		for (k = 2; k <= sqrt(i); k++)
		{
			if (i % k == 0)
			{
				check = false;
				break;
			}
			check = true;
		}
		if (check == true)
		{
			S1 += i;
		}
	}
	cout << "Tong cac so nguyen to tu 1 den 50 tinh bang vong lap for la: " << S1 << endl;
	check = true;
	while (j <= 50)
	{
		for (k = 2; k <= sqrt(j); k++)
		{
			if (j % k == 0)
			{
				check = false; 
				break;
			}
			check = true;
		}
		if (check == true)
		{
			S2 += j;
		}
		j++;
	}
	cout << "Tong cac so nguyen to tu 1 den 50 tinh bang vong lap while la: " << S2;
	return 0;
}