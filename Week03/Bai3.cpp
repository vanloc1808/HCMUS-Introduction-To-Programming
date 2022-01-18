#include <iostream>
using namespace std;
int main()
{
	int a, b;
	long long S;
	char toantu;
	cout << "Nhap vao theo thu tu hai so nguyen a, b va dau phep tinh: ";
	cin >> a >> b >> toantu;
	S = 0;
	switch (toantu)
	{
	case '+':
		S = a + b;
		break;
	case '-':
		S = a - b;
		break;
	case '*':
		S = a * b;
		break;
	case '/':
		S = a / b;
		break;
	case '^':
		S = 1;
		for (int i = 1; i <= b; i++)
		{
			S = S * a;
		}
		break;
	}
	cout << "Ket qua cua phep tinh la: " << S;
	return 0;
}