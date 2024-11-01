#include <bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        int n;
        cin >> n;
        int arr[n];

        for (int i = 0; i < n; i++)
        {
            cin >> arr[i];
        }
        int mn = arr[0] + arr[1] + 1;
        for (int i = 0; i < n; i++)
        {

            for (int j = i + 1; j < n; j++)
            {
                int x = arr[i] + arr[j] + j - i;
                mn=min(mn,x);
            }
        }

        cout << mn << endl;
    }

    return 0;
}