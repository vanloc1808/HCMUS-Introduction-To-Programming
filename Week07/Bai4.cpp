#include <iostream>
#include <cmath>
using namespace std;

void NhapMang(int a[], int& n)
{
    for (int i = 0; i < n; i++)
    {
        cin >> a[i];
    }
}

void XuatMang(int a[], int n)
{
    for (int i = 0; i < n; i++)
    {
        cout << a[i] << " ";
    }
    cout << endl;
}


int findX(int a[], int n, int x)
{
    for (int i = 0; i < n; i++)
    {
        if (a[i] == x)
        {
            return i;
        }
    }
    return -1;
}

int findTheNearest(int a[], int n, int x)
{
    int minDistance = fabs(a[0] - x);
    int j = 0;
    for (int i = 1; i < n; i++)
    {
        int tempDistance = fabs(a[i] - x);
        if (tempDistance < minDistance)
        {
            minDistance = tempDistance;
            j = i;
        }
    }
    return j;
}

int main()
{
    int a[1000], n, x;
    cout << "Nhap so phan tu cua mang: ";
    cin >> n;
    cout << "Nhap cac phan tu cua mang: ";
    NhapMang(a, n);
    cout << "Nhap phan tu x can tim: ";
    cin >> x;
    if (findX(a,n,x) == -1)
    {
        cout << x << " khong xuat hien trong mang." << endl;
    }
    else
    {
        cout << x << " xuat hien trong mang o vi tri thu " << findX(a, n, x) << "." << endl;
    }
    cout << "Phan tu gan " << x << " nhat la " << a[findTheNearest(a,n,x)] << ".";
    return 0;
}


