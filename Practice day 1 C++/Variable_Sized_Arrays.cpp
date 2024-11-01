#include <bits/stdc++.h>
using namespace std;
int main()
{
    int n, q;
    cin >> n >> q;
    int a[n];
    // int cnt[100];
    int arr[100][100];
    for (int i = 0; i < n; i++)
    {
        int k;
        cin >> k;
        a[i] = k;
       
        int b[n][k];
        for (int j = 0; j < k; j++)
        {
            cin >> b[i][j];
            arr[i][j] = b[i][j];
        }
        
    }
   
    while (q--)
    {
         int ii, jj;
        cin >> ii >> jj;
        for (int i = 0; i < n; i++)
        {
            for (int j = 0; j < a[i]; j++)
            {
                if (ii == i && jj == j)
                {
                    cout<<a[i]<<" "<<j;
                    // cout << arr[i][j] << endl;
                }
            }
        }
    }
    return 0;
}