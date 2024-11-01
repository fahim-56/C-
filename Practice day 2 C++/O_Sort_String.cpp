#include <bits/stdc++.h>
using namespace std;
int main()
{
    int n;
    cin >> n;
    int cnt[26] = {0};
    for (int i = 0; i < n; i++)
    {
        char str;
        cin >>str;
        cnt[str-97]++;
    }
    char ch=0;
    for (int i = 0; i < 26; i++)
    {
        if (cnt[i] != 0)
        {
            ch = i+97;
            while(cnt[i]--)
            cout << ch;
        }
    }

    return 0;
}