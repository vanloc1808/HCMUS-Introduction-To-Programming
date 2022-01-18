#include <iostream>
using namespace std;
int main()
{
	int i, j;
	int S1, S2;
	j = 1; S1 = 0; S2 = 0;
	//tinh bang vong for
	for (i = 1; i <= 50; i++)
	{
		if (i % 2 == 1)
		{
			S1 += i;
		}
	}
	cout << "Tong can tim tinh bang vong lap for la: " << S1 << endl;
	//tinh bang vong while
	while (j <= 50)
	{
		if (j % 2 == 1)
		{
			S2 += j;
			;
		}
		j++;
	}
	cout << "Tong can tim tinh bang vong lap while la: " << S2;
	return 0;
}