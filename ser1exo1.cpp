/*
#include <iostream>

using namespace std;

void merg(int a [100], int b [100], int t[100], int n)
{
    int j = 0, k = 0, i = 0;
    while (j < n && k < n)
    {
        if (a[j] <= b[k])
        {
            t[i++] = a[j++];
        }
        else
        {
            t[i++] = b[k++];
        }
    }
    while (j < n)
    {
        t[i++] = a[j++];
    }
    while (k < n)
    {
        t[i++] = b[k++];
    }
}
void read(int t[100], int n)
{
    int i;
    for (int i = 0; i <n; i++)
    {
        cin >> t[i];
    }
}
void dis(int t[100],int n)
{
    int i;
    for (i = 0; i < n; i++)
    {
        cout << t[i] << "\t";
    }
}
int main()
{
    int a[100], b[100], c[100]; 
    int n;
    cout << "enter the size of the arrays a and b : " << endl;
    cin >> n;
    cout << "enter the elements of  array a : ";
    read(a,n);
    cout << "enter the elements of array b : ";
    read(b,n);
    merg(a, b, c,n);
    cout << "merged and sorted array : ";
    dis(c,2*n);
    return 0;

}
*/

#include <iostream>

using namespace std;

void merg(int* a, int* b, int* t, int n)
{
    int j = 0, k = 0, i = 0;
    while (j < n && k < n)
    {
        if (a[j] <= b[k])
        {
            t[i++] = a[j++];
        }
        else
        {
            t[i++] = b[k++];
        }
    }
    while (j < n)
    {
        t[i++] = a[j++];
    }
    while (k < n)
    {
        t[i++] = b[k++];
    }
}
void read(int* t, int n)
{
    for (int i = 0; i < n; i++)
    {
        cin >> t[i];
    }
}
void dis(int* t, int n)
{
    int i;
    for (i = 0; i < n; i++)
    {
        cout << t[i] <<"\t";
    }
}
int main()
{
    int n;
    int* a, * b, * c;
    cout << "enter the size of the arrays a and b : " << endl;
    cin >> n;
    a = new int[n];
    b = new int[n];
    c = new int[n * 2];
    cout << "enter the elements of  array a : ";
    read(a, n);
    cout << "enter the elements of array b : ";
    read(b, n);
    merg(a, b, c, n);
    cout << "merged and sorted array : ";
    dis(c, 2 * n);
    delete[] a;
    delete[] b;
    delete[] c;
    return 0;

}
