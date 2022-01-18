#include <iostream>
using namespace std;


void checkExistence(int x, int s[], int n)
{
    int b[1000];
    int j = 0;
    for (int i = 0; i < n; i++)
    {
        if (s[i] == x)
        {
            b[j] = i;
            j++;
        }
    }
    if (j == 0)
    {
        cout << "-1" << endl;
    }
    else
    {
        cout << "Cac vi tri xuat hien cua " << x << " trong day la: ";
        for (int i = 0; i < j; i++)
        {
            cout << b[i] << " ";
        }
        cout << endl;
    }
}

void findMinDistance(int x, int s[], int n)
{
    int minDistance = fabs(s[0] - x);
    int b[1000];
    int j = 0;
    for (int i = 1; i < n; i++)
    {
        int tempDistance = fabs(s[i] - x);
        if (tempDistance < minDistance)
        {
            minDistance = tempDistance;
            j = i;
        }
    }
    cout << "Vi tri gan " << x << " nhat trong day la: " << j;
}

int main()
{
    int s[1000];
    int n, x;
    cout << "Nhap vao so luong phan tu cua day: ";
    cin >> n;
    if (n < 0 || n > 1000)
    {
        cout << "Moi nhap lai!!";
    }
    cout << "Nhap lan luot cac phan tu cua day: ";
    for (int i = 0; i < n; i++)
    {
        cin >> s[i];
    }
    cout << "Nhap vao so can kiem tra: ";
    cin >> x;
    checkExistence(x, s, n);
    findMinDistance(x, s, n);
    return 0;
}


