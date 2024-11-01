#include <bits/stdc++.h>
using namespace std;
int main()
{
    int n;
    cin >> n;
    int *arr = new int[n];
    int *ar = new int[n];
    for (int i = 0; i < n; i++)
    {
        cin >> arr[i];
        ar[i] = arr[i];
    }
    delete[] arr;

    int m;
    cout << "Enter the number of value want to insert :" << endl;
    cin >> m;
    arr = new int[n + m];
    for (int i = 0; i < n; i++)
    {
        arr[i] = ar[i];
    }
    delete[] ar;
    cout << "Enter the value want to insert :" << endl;
    for (int i = n; i < n + m; i++)
    {
        cin >> arr[i];
    }
    for (int i = 0; i < n + m; i++)
    {
        cout << arr[i] << " ";
    }

    return 0;
}