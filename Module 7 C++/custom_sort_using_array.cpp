#include <bits/stdc++.h>
using namespace std;
class freq
{
public:
    char ch;
    int cnt;
};
bool cmp(freq a, freq b)
{
    return a.cnt > b.cnt;
}
int main()
{
    string s;
    cin >> s;
    freq arr[26];                     //   creating array of obj of class...
    for (char i = 'a'; i <= 'z'; i++) // initialing this obj's by alphabets and 0
    {
        arr[i - 'a'].ch = i;
        arr[i - 'a'].cnt = 0;
    }
    for (char c : s)    // increasing all the cnt's of the matching char
    {
        arr[c - 'a'].cnt++;
    }
    stable_sort(arr, arr + 26, cmp); // sorting the cnt arr

    for (int i=0; i <26; i++)
    {
        for (int j = 0; j < arr[i].cnt; j++)
        {
            cout << arr[i].ch;
        }
    }

    // for (char i = 'a'; i <= 'z'; i++)
    // {
    //     if (arr[i - 'a'].cnt > 0)
    //     {
    //         cout << arr[i - 'a'].ch << " " << arr[i - 'a'].cnt << endl;
    //     }
    // }

    // zbacbzaz
    return 0;
}