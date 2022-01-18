#include <iostream>
using namespace std;

int CountDigits(int n)
{
	int i = 0;
	while (n != 0)
	{
		n /= 10;
		i++;
	}
	return i;
}

int SumOfDigits(int n)
{
	int S = 0;
	while (n != 0)
	{
		S += n % 10;
		n /= 10;
	}
	return S;
}

bool CheckHappy(int n)
{
	int NumberOfDigits = CountDigits(n);
	if (NumberOfDigits % 2 == 1)
	{
		return false;
	}
	else
	{
		int k = int(pow(10.0,NumberOfDigits/2));
		int FirstHalf = n / k;
		int SecondHalf = n % k;
		int S1 = SumOfDigits(FirstHalf);
		int S2 = SumOfDigits(SecondHalf);
		if (S1 == S2)
		{
			return true;
		}
		else
		{
			return false;
		}
	}

}

int main()
{
	int N;
	cout << "Nhap so nguyen duong N: ";
	cin >> N;
	if (CheckHappy(N) == true)
	{
		cout << N << " la so hanh phuc.";
	}
	else
	{
		cout << N << " khong la so hanh phuc.";
	}
}