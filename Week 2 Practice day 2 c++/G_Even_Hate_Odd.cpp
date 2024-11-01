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
        int digit;
        int odd = 0, even = 0;
        for (int i = 0; i < n; i++)
        {
            cin >> digit;
            if (digit % 2 == 0)
            {
                even++;
            }
            else
            {
                odd++;
            }
        }
        if (n % 2 == 1)
        {
            cout << "-1" << endl;
        }
        else
        {
            if (odd <= even)
            {
                cout << (even - (n / 2)) << endl;
            }
            else
            {
                cout << (odd - (n / 2)) << endl;
            }
        }
    }
    return 0;
}