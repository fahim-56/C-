#include <bits/stdc++.h>
using namespace std;
void fun(string s, int i)
{
    if (i == -1)
        return;
    else
    {
        cout << s[i];
        fun(s, i - 1);
    }
}
int main()
{
    string s;
    getline(cin, s);
    stringstream ss;
    ss << s;
    string c;
    bool flag = 0;
    while (ss >> c)
    {
        if (flag)
        {
            cout << " ";
        }
        flag = 1;

        // reverse(c.begin(), c.end());
        // for(char ch: c)
        // {
        //     cout<<ch;
        // }

        // for (int i = c.size() - 1; i >= 0; i--)
        // {
        //     cout << c[i];
        // }

        fun(c, c.size() - 1);
    }
    return 0;
}
