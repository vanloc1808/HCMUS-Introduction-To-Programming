#include <iostream>;
using namespace std;
bool testsnt(int i)
{
	for (int j = 2; j <= sqrt(i); j++)
	{
		if (i % j == 0)
		{
			return false;
		}
	}
	return true;
}
int main()
{
	int S = 5; //5 la tong cua 2 va 3, ta khai bao S = 5 se khong can phai xet 2 va 3.
	for (int i = 4; i <= 49; i++)
	{
		if (testsnt(i) == true)
		{
			S += i;
		}
	}
	cout << "Tong cac so nguyen to trong 50 so tu nhien dau tien la " << S;
}