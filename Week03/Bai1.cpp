#include <iostream>
using namespace std;
int main()
{
	int sodien, tiendien;
	float tiendong;
	cout << "Nhap so kWh dien tieu thu: ";
	cin >> sodien;
	if (sodien > 0 && sodien <= 100)
	{
		tiendien = sodien * 1242;
	}
	else
	{
		if (sodien <= 150)
		{
			tiendien = 1242 * 100 + (sodien - 100) * 1304;
		}
		else
		{
			if (sodien <= 200)
			{
				tiendien = 1242 * 100 + 1304 * 50 + (sodien - 150) * 1651;
			}
			else
			{
				if (sodien <= 300)
				{
					tiendien = 1242 * 100 + 1304 * 50 + 1651 * 50 + (sodien - 200) * 1788;
				}
				else
				{
					if (sodien <= 400)
					{
						tiendien = 1242 * 100 + 1304 * 50 + 1651 * 50 + 1788 * 100 + (sodien - 300) * 1912;
					}
					else
					{
						tiendien = 1242 * 100 + 1304 * 50 + 1651 * 50 + 1788 * 100 + 1912 * 100 + (sodien - 400) * 1962;
					}
				}
			}
		}
	}
	tiendong = 1.1 * tiendien;
	cout << "So tien phai dong la " << tiendong / 1000 << " nghin dong";
	return 0;
}