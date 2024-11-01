#include <bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin >> t;
    getchar();
    while (t--)
    {
        string s;
        getline(cin, s);
        int sum1 = 0;
        int sum2 = 0;

        int i = 0;
        int j = s.size() - 1;
        while (i < j)
        {
            sum1 += s[i];
            sum2 += s[j];
            i++;
            j--;
        }

        if (sum1 == sum2)
        {
            cout << "YES" << endl;
        }
        else
        {
            cout << "NO" << endl;
        }
    }
    return 0;
}