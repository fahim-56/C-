#include <bits/stdc++.h>
using namespace std;
int main()
{
    char str[100005];
    while (cin.getline(str, 100005))
    {
        int l = strlen(str);
        sort(str, str + l);
        for (int i = 0; i < l; i++)
        {
            if (str[i] != ' ')
            {
                cout << str[i];
            }
        }
        cout << endl;
    }
    return 0;
}