#include <bits/stdc++.h>
using namespace std;
int main()
{
    int n;
    cout << "Enter The Array Element number : " << endl;
    cin >> n;
    int *arr = new int[n];
    cout << "Enter The Array Element : " << endl;

    for (int i = 0; i < n; i++)
    {
        cin >> arr[i];
    }
    cout << "The Array Elements are : " << endl;

    for (int i = 0; i < n; i++)
    {
        cout << arr[i] << " ";
    }
    cout << endl;
    delete[] arr;
    cout << "After delete The Array Elements are : " << endl;

    for (int i = 0; i < n; i++)
    {
        cout << arr[i] << " ";
    }
    return 0;
}