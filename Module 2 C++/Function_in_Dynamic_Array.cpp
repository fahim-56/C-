#include <bits/stdc++.h>
using namespace std;
int *dynamic_function(int n)
{
    int *arr;
    arr = new int[n];
    cout << "Enter The Array elements : " << endl;

    for (int i = 0; i < n; i++)
    {
        cin >> arr[i];
    }
    return arr;
}
int main()
{
    int n;
    cout << "Enter The Array element number : " << endl;
    cin >> n;

    int *arr = dynamic_function(n);
    for (int i = 0; i < n; i++)
    {
        cout << arr[i] << " ";
    }
    return 0;
}