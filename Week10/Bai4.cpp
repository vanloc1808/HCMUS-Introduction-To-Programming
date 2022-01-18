#include <iostream>
using namespace std;

void inputAMatrix(double a[100][100], int row, int column)
{
    for (int i = 0; i < row; i++)
    {
        for (int j = 0; j < column; j++)
        {
            cin >> a[i][j];
        }
    }
}

void outputAMatrix(double a[100][100], int row, int column)
{
    for (int i = 0; i < row; i++)
    {
        for (int j = 0; j < column; j++)
        {
            cout << a[i][j] << " ";
        }
        cout << endl;
    }
}

void sumOfTwoMatrixes(double term1[100][100], double term2[100][100], double sum[100][100], int row, int column)
{
    for (int i = 0; i < row; i++)
    {
        for (int j = 0; j < column; j++)
        {
            sum[i][j] = term1[i][j] + term2[i][j];
        }
    }
    cout << "Tong cua hai ma tran da nhap la: " << endl;
    for (int i = 0; i < row; i++)
    {
        for (int j = 0; j < column; j++)
        {
            cout << sum[i][j] << " ";
        }
        cout << endl;
    }
}

int main()
{
    double term1[100][100], term2[100][100], sum[100][100];
    int row1, column1, row2, column2, rowSum, columnSum;
    cout << "--------Tinh tong 2 ma tran--------" << endl;
    cout << "Nhap ma tran thu nhat: " << endl;
    cout << "Nhap so dong cua ma tran thu nhat: ";
    cin >> row1;
    cout << "Nhap so cot cua ma tran thu nhat: ";
    cin >> column1;
    cout << "Nhap lan luot cac phan tu cua ma tran thu nhat: ";
    inputAMatrix(term1, row1, column1);
    cout << "Nhap ma tran thu hai: " << endl;
    do
    {
        cout << "Nhap so dong cua ma tran thu hai: ";
        cin >> row2;
        cout << "Nhap so cot cua ma tran thu hai: ";
        cin >> column2;
    } while (row2 != row1 || column2 != column1);
    cout << "Nhap lan luot cac phan tu cua ma tran thu hai: ";
    inputAMatrix(term2, row2, column2);
    rowSum = row1;
    columnSum = column1;
    sumOfTwoMatrixes(term1, term2, sum, rowSum, columnSum);
    return 0;
}
