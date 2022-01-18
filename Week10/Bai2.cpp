#include <iostream>
#include <string>
using namespace std;

void Standardize(string str)
{
	int Length = str.length();
	if (str[0] == ' ')
	{
		for (int i = 0; i < Length - 1; i++)
		{
			str[i] = str[i + 1];
		}
		Length -= 1;
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
	cout << "Sau khi chuan hoa: " << str << endl;
}

void toUpperTheFirst(string str)
{
	if (str[0] >= 'a' && str[0] <= 'z')
	{
		str[0] -= 32;
	}
	for (int i = 1; i < str.length(); i++)
	{
		if (str[i - 1] == ' ' && str[i] >= 'a' && str[i] <= 'z')
		{
			str[i] -= 32;
		}
	}
	cout << str;
}

int main()
{
	string needStandard, fullName;
	cout << "Nhap chuoi can chuan hoa: ";
	getline(cin, needStandard);
	Standardize(needStandard);
	cout << "Nhap ho va ten: ";
	getline(cin, fullName);
	Standardize(fullName);
	toUpperTheFirst(fullName);
	return 0;
}

