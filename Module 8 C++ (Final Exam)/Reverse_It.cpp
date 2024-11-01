#include <bits/stdc++.h>
using namespace std;

int main()
{
    string s;
    getline(cin, s);
    // cout<<s.size();
    for (char ch : s)
    {
        if (ch == ',')
        {
            cout << endl;
            continue;
        }
        cout << ch;
    }
    return 0;
}
