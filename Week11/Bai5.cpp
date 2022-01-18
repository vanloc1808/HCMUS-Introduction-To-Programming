#include <iostream>
using namespace std;

void substr(char s[], int pos, int slen)
{
	int n = pos + slen;
	for (int i = pos; i < n; i++)
	{
		cout << s[i];
	}
}

bool Strcmp(char s1[], char s2[])
{
	int n1 = strlen(s1);
	int n2 = strlen(s2);
	if (n1 != n2)
	{
		return false;
	}
	else
	{
		for (int i = 0; i < n1; i++)
		{
			if (s1[i] != s2[i])
			{
				return false;
			}
		}
		return true;
	}
}

int main()
{
	char s[100];
	int pos, len;
	cout << "Nhap chuoi can lay ra chuoi con: ";
	cin >> s;
	cout << "Nhap vi tri bat dau chuoi con: ";
	cin >> pos;
	cout << "Nhap do dai chuoi con: ";
	cin >> len;
	cout << "Chuoi con can lay ra la: ";
	substr(s, pos, len);
	cout << "\n";
	char s1[100], s2[100];
	cout << "Nhap hai chuoi can kiem tra: ";
	cin >> s1 >> s2;
	if (Strcmp(s1, s2) == true)
	{
		cout << "Hai chuoi nay bang nhau.";
	}
	else
	{
		cout << "Hai chuoi nay khong bang nhau.";
	}
	return 18082002;
}

