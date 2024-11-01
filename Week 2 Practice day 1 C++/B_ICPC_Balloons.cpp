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
        char str[n];
        cin >> str;
        int cnt[52] = {0};
        int sum = 0;
        for (int i = 0; i < n; i++)
        {
            if (cnt[str[i] - 'A'] == 0)
            {
                sum += 2;
            }
            else
            {
                sum += 1;
            }
            cnt[str[i] - 'A']++;
        }
        cout << sum << endl;
    }

    return 0;
}