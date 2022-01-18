#include <iostream>
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

int main()
{
    int a[1000], n, x;
    cout << "Nhap so phan tu cua mang: ";
    cin >> n;
    cout << "Nhap cac phan tu cua mang: ";
    NhapMang(a, n);
    cout << "Mang da nhap la: ";
    XuatMang(a, n);
    cout << "Nhap phan tu x can tim: ";
    cin >> x;
    cout << findX(a, n, x);
    return 1;

}


