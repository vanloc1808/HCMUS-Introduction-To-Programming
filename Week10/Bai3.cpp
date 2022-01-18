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

double sumOfBorders(double a[100][100], int row, int column)
{
    double sum;
    sum = 0;
    for (int j = 0; j < column; j++)
    {
        sum = sum + a[0][j] + a[row - 1][j];
    }
    for (int i = 0; i < row; i++)
    {
        sum = sum + a[i][0] + a[i][column - 1];
    }
    sum = sum - a[0][0] - a[0][column - 1] - a[row - 1][0] - a[row - 1][column - 1];
    return sum;
}
void sumOfPrimaryAndSecondaryDiagon(double a[100][100], int row, int column)
{
    if (row != column)
    {
        cout << "Vi day khong phai ma tran vuong nen ta khong xet duong cheo chinh va duong cheo phu";
    }
    else
    {
        double sumPrim = 0, sumSecond = 0;
        for (int i = 0; i < row; i++)
        {
            sumPrim += a[i][i];
            sumSecond += a[i][row - 1 - i];
        }
        cout << "Tong cac so tren duong cheo chinh la: " << sumPrim << endl;
        cout << "Tong cac so tren duong cheo phu la: " << sumSecond << endl;
    }
}

double sumRowK(double a[100][100], int row, int column, int k)
{
    double sumRowK = 0;
    for (int j = 0; j < column; j++)
    {
        sumRowK += a[k - 1][j];
    }
    return sumRowK;
}

int rowWithMaxSum(double a[100][100], int row, int column)
{
    double maxSum = sumRowK(a, row, column, 1);
    int rowWithMaxSum = 1;
    for (int i = 2; i <= row; i++)
    {
        double tempSum = sumRowK(a, row, column, i);
        if (maxSum < tempSum)
        {
            maxSum = tempSum;
            rowWithMaxSum = i;
        }
    }
    return rowWithMaxSum;
}

void findHorseNumber(double a[100][100], int row, int column)
{
    double s[100];
    int numberOfA = 0;
    int checkingRow = 0;
    for (int i = 0; i < row; i++)
    {
        double maxThisRow = a[i][0];
        int checkingColumn = 0;
        for (int j = 1; j < column; j++)
        {
            if (a[i][j] > maxThisRow)
            {
                maxThisRow = a[i][j];
                checkingColumn = j;
            }
        }
        for (int k = 0; k < row; k++)
        {
            double minThisColumn = a[0][checkingColumn];
            for (int k = 0; k < row; k++)
            {
                if (a[k][checkingColumn] < minThisColumn)
                {
                    minThisColumn = a[k][checkingColumn];
                    checkingRow = k;
                }
            }
        }
        if (checkingRow == i)
        {
            s[numberOfA] = maxThisRow;
            numberOfA++;
        }
    }
    if (numberOfA == 0)
    {
        cout << "Khong co so yen ngua.";
    }
    else
    {
        cout << "Cac so yen ngua la: ";
        for (int i = 0; i < numberOfA; i++)
        {
            cout << s[i] << " ";
        }
        cout << endl;
    }
}

int main()
{
    double a[100][100];
    int row, column, k;
    cout << "------Nhap ma tran------" << endl;
    cout << "Nhap so dong: ";
    cin >> row;
    cout << "Nhap so cot: ";
    cin >> column;
    cout << "Nhap cac phan tu cua ma tran: " << endl;
    inputAMatrix(a, row, column);
    cout << "Ma tran da nhap la: " << endl;
    outputAMatrix(a, row, column);
    do
    {
        cout << "Nhap hang thu k can tinh tong (1 <= k <= " << row << "): ";
        cin >> k;
    } while (k<1 || k > row);
    cout << "Tong hang thu " << k << " la: " << sumRowK(a, row, column, k) << endl;
    system("pause");
    cout << "Hang co tong lon nhat la: " << rowWithMaxSum(a, row, column) << endl;
    system("pause");
    findHorseNumber(a, row, column);
    system("pause");
    cout << "Tong cac so tren duong bien la: " << sumOfBorders(a, row, column) << endl;
    sumOfPrimaryAndSecondaryDiagon(a, row, column);
}

