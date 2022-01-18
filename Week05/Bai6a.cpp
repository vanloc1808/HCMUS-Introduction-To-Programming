#include <iostream>
using namespace std;
void Swap(int &a, int &b)
{
	int temp = a;
	a = b;
	b = temp;
}
int main()
{
	int swap1, swap2;
	cout << "Nhap hai so can doi gia tri. Ban dau a = ";
	cin >> swap1;
	cout << "va b = ";
	cin >> swap2;
	Swap(swap1, swap2);
	cout << "Sau khi hoan vi: a = " << swap1 << " va b = " << swap2;
}