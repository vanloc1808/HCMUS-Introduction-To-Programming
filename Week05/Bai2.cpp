
#include <iostream>
using namespace std;
int main()
{
	int /*a[1000],*/ n;
	cout << "Input n = ";
	cin >> n;
	int r;
	unsigned long long S = 0, i = 1;
	/*while (n != 0)
	{
		a[i] = n % 2;
		n /= 2;
		i++;
	}
	for (int j = i - 1; j >= 0; j--)
	{
		cout << a[j];
	}*/
	while (n != 0)
	{
		r = n % 2;
		n /= 2;
		S = S + i * r;
		i *= 10;
	}
	cout << S;
	return 1;
}