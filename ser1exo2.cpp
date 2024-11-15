/*
#include <iostream>

using namespace std;

void read(int* t, int n)
{
    int i;
    for (i = 0; i < n; i++)
    {
        cin >> t[i];
    }
}
void minmaximum(int* t, int n, int& mi, int& imi, int& ma, int& ima)
{
    mi = t[0];
    ma = t[0];
    imi = 0;
    ima = 0;
    for (int i = 1; i < n; i++)
    {
        if (mi > t[i])
        {
            mi = t[i];
            imi = i;
        }
        if (ma < t[i])
        {
            ma = t[i];
            ima = i;
        }
    }
}
void sor(int* t, int n)
{
    int i, j;
    for (i = 0; i < n - 1; i++)
    {
        for (j = i + 1; j < n; j++)
        {
            if (t[i] > t[j])
            {
                int tmp = t[j];
                t[j] = t[i];
                t[i] = tmp;
            }
        }
    }
}
void dis(int t[], int n)
{
    for (int i = 0; i < n; i++)
    {
        cout << t[i] << "\t";
    }
}
int main()
{
    int a[100], n;
    int mi, ma, x, y;
    cout << "enter the size of the array : ";
    cin >> n;
    cout << "enter the numbers of the array : " << endl;
    read(a, n);
    minmaximum(a, n, mi, x, ma, y);
    cout << "the minmum is : " << mi << " and its its idices : " << x << endl;
    cout << "the maximum is : " << ma << " and its indices : " << y << endl;
    sor(a, n);
    cout << "the new sorted array : " << endl;
    dis(a, n);
    return 0;
}
*/
#include <iostream>

using namespace std;

void read(int* t, int n)
{
    int i;
    for (i = 0; i < n; i++)
    {
        cin >> t[i];
    }
}
void creat(int*& a, int& n)
{
    cout << "enter he size of the array : ";
    cin >> n;
    a = new int[n];
}
void minmaximum(int* t, int n, int& mi, int& imi, int& ma, int& ima)
{
    mi = t[0];
    ma = t[0];
    imi = 0;
    ima = 0;
    for (int i = 1; i < n; i++)
    {
        if (mi > t[i])
        {
            mi = t[i];
            imi = i;
        }
        if (ma < t[i])
        {
            ma = t[i];
            ima = i;
        }
    }
}
void sor(int t[], int n)
{
    int i, j;
    for (i = 0; i < n - 1; i++)
    {
        for (j = i + 1; j < n; j++)
        {
            if (t[i] > t[j])
            {
                int tmp = t[i];
                t[i] = t[j];
                t[j] = tmp;
            }
        }
    }
}
void dis(int* t, int n)
{
    for (int i = 0; i < n; i++)
    {
        cout << t[i] << "\t";
    }
}
int main()
{
    int n;
    int mi, ma, imi, ima;
    int* a;
    creat(a, n);
    cout << "enter the numbers of the array : " << endl;
    read(a, n);
    minmaximum(a, n, mi, imi, ma, ima);
    cout << "the minmum is : " << mi << " and its its idices : " << imi << endl;
    cout << "the maximum is : " << ma << " and its indices : " << ima << endl;
    sor(a, n);
    cout << "the new sorted array : " << endl;
    dis(a, n);
    delete[] a;
    return 0;
}