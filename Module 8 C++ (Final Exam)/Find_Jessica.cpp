#include <bits/stdc++.h>
using namespace std;
int main()
{
    string s;
    getline(cin, s);
    stringstream ss;
    ss << s;
    string word;
    string j = "Jessica";
    int cnt = 0;
    while (ss >> word)
    {
        if (word == j)
        {
            cnt++;
            break;
        }
    }
    if (cnt == 0)
    {
        cout << "NO" << endl;
    }
    else
    {
        cout << "YES" << endl;
    }
    return 0;
}