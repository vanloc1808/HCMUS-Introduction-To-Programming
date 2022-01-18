#include <iostream>
#include <string>
using namespace std;

void XuatChuoi(string str,int n)
{
	for (int i = 0; i < n; i++)
	{
		cout << str[i];
	}
}

void standardizeAString(string str)
{
	int Length = str.length();
	if (str[0] == ' ')
	{
		for (int i = 0; i < str.length(); i++)
		{
			str[i] = str[i + 1];
		}
		Length -= 1;
	}
	if (str[str.length() - 1] == ' ')
	{
		Length -= 1;
	}
	if (str[0] >= 'a' && str[0] <= 'z')
	{
		str[0] -= 32;
	}
	for (int i = 1; i < Length; i++)
	{
		if (str[i] == ' ' && str[i - 1] == ' ')
		{
			for (int j = i; j < Length; j++)
			{
				str[j] = str[j + 1];
			}
			Length -= 1;
			i -= 1;
		}
	}
	for (int i = 1; i < Length; i++)
	{
		if (str[i - 1] == ' ' && str[i] >= 'a' && str[i] <= 'z')
		{
			str[i] -= 32;
		}
	}
	XuatChuoi(str, Length);
}

int main()
{
	string str;
	cout << "Nhap chuoi can chuan hoa: ";
	getline(cin, str);
	standardizeAString(str);
	return 0;
}


