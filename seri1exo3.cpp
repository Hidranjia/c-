/*
#include <iostream>

using namespace std;

void in(int t[][100], int n)
{
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < n; j++)
        {
            cin >> t[i][j];
        }
    }
}
void sum(int a[][100], int b[][100], int s[][100], int n)
{
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < n; j++)
        {
            s[i][j] = a[i][j] + b[i][j];
        }
    }
}
void product(int a[][100], int b[][100], int p[][100], int n)
{
    int i, j, k;
    for (i = 0; i < n; i++)
    {
        for (j = 0; j < n; j++)
        {
            p[i][j] = 0;
            for (k = 0; k < n; k++)
            {
                p[i][j] = p[i][j] + a[i][k] * b[k][j];
            }
        }
    }
}
void null(int t[][100], int n, int& x)
{
    int i, j;
    x = 0;
    for (i = 0; i < n; i++)
    {
        for (j = 0; j < n; j++)
        {
            if (t[i][j] == 0)
            {
                x++;
            }
        }
    }
}
void swaps(int a[][100], int b[][100], int n)
{
    int i, j;
    int mini = 0, minj = 0;
    int maxi = 0, maxj = 0;
    for (i = 0; i < n; i++)
    {
        for (j = 0; j < n; j++)
        {
            if (a[i][j] < a[mini][minj])
            {
                mini = i;
                minj = j;
            }
            if (b[i][j] > b[maxi][maxj])
            {
                maxi = i;
                maxj = j;
            }
        }
    }
    int temp;
    temp = a[mini][minj];
    a[mini][minj] = b[maxi][maxj];
    b[maxi][maxj] = temp;
}
void dis(int t[][100], int n)
{
    int i, j;
    for (i = 0; i < n; i++)
    {
        for (j = 0; j < n; j++)
        {
            cout << t[i][j] << "\t" ;
        }
        cout << endl;
    }
}
int main()
{
    int n, a[100][100], b[100][100], s[100][100], p[100][100];
    cout << "give the size n : ";
    cin >> n;
    cout << "give the elements of matrice a : " << endl;
    in(a, n);
    cout << "givr the elements of matrice b : " << endl;
    in(b, n);
    sum(a, b, s, n);
    cout << "the sum of the arrays : " << endl;
    dis(s, n);
    product(a, b, p, n);
    cout << "the producte of the arrays : " << endl;
    dis(p, n);
    int x;
    null(a, n, x);
    cout << "there are " << x << " numbers null in the array a" << endl;
    int y;
    null(b, n, y);
    cout << "there are " << y << " numbers null in the array b" << endl;
    swaps(a, b, n);
    cout << "the array a : " << endl;
    dis(a, n);
    cout << "the array b : " << endl;
    dis(b, n);
    return 0;
}
*/
#include <iostream>

using namespace std;

void creat(int**& t, int n)
{
    t = new int* [n];
    for (int i = 0; i < n; i++)
    {
        t[i] = new int[n];
    }
}
void lib(int**& t, int n)
{
    for (int i = 0; i < n; i++)
    {
        delete[]t[i];
    }
    delete[]t;
    t = 0;
}

void in(int** t, int n)
{
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < n; j++)
        {
            cin >> t[i][j];
        }
    }
}
void sum(int**& a, int**& b, int**& s, int n)
{
    int i, j;
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < n; j++)
        {
            s[i][j] = a[i][j] + b[i][j];
        }
    }
}
void product(int**& a, int**& b, int**& p, int n)
{
    int i, j, k;
    for (i = 0; i < n; i++)
    {
        for (j = 0; j < n; j++)
        {
            p[i][j] = 0;
            for (k = 0; k < n; k++)
            {
                p[i][j] = p[i][j] + a[i][k] * b[k][j];
            }
        }
    }
}
void null(int** t, int n, int& x)
{
    int i, j;
    x = 0;
    for (i = 0; i < n; i++)
    {
        for (j = 0; j < n; j++)
        {
            if (t[i][j] == 0)
            {
                x++;
            }
        }
    }
}
void swaps(int**& a, int**& b, int n)
{
    int i, j;
    int mini = 0, minj = 0;
    int maxi = 0, maxj = 0;
    for (i = 0; i < n; i++)
    {
        for (j = 0; j < n; j++)
        {
            if (a[i][j] < a[mini][minj])
            {
                mini = i;
                minj = j;
            }
            if (b[i][j] > b[maxi][maxj])
            {
                maxi = i;
                maxj = j;
            }
        }
    }
    int temp;
    temp = a[mini][minj];
    a[mini][minj] = b[maxi][maxj];
    b[maxi][maxj] = temp;
}
void dis(int** t, int n)
{
    int i, j;
    for (i = 0; i < n; i++)
    {
        for (j = 0; j < n; j++)
        {
            cout << t[i][j] << "\t";
        }
        cout << endl;
    }
}
int main()
{
    int** a;
    int** b;
    int** s;
    int** p;
    int n;
    cout << "give the size n : ";
    cin >> n;
    creat(a, n);
    creat(b, n);
    creat(s, n);
    creat(p, n);
    cout << "give the elements of matrice a : " << endl;
    in(a, n);
    cout << "give the elements of matrice b : " << endl;
    in(b, n);
    sum(a, b, s, n);
    cout << "the sum of the arrays : " << endl;
    dis(s, n);
    product(a, b, p, n);
    cout << "the producte of the arrays : " << endl;
    dis(p, n);
    int x;
    null(a, n, x);
    cout << "there are " << x << " numbers null in the array a" << endl;
    int y;
    null(b, n, y);
    cout << "there are " << y << " numbers null in the array b" << endl;
    swaps(a, b, n);
    cout << "the array a : " << endl;
    dis(a, n);
    cout << "the array b : " << endl;
    dis(b, n);
    lib(a, n);
    lib(b, n);
    lib(s, n);
    lib(p, n);
    return 0;
}