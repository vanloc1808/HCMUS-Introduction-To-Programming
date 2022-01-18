#include <iostream>
#include <string>
using namespace std;
int main()
{
	fflush(stdin);
	char hovaten[40];
	cout << "Nhap ho va ten cua ban: ";
	fgets(hovaten, 40, stdin);
	if (hovaten[0] >= 'a' && hovaten[0] <= 'z')
	{
		hovaten[0] -= 32;
	}
	for (int i = 1; i <=sizeof(hovaten); i++)
	{
		if (hovaten[i] >= 'a' && hovaten[i] <= 'z' && hovaten[i - 1] == ' ')
		{
			hovaten[i] -= 32;
		}
	}
	cout << hovaten;
	return 0;
}