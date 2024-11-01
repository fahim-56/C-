#include <bits/stdc++.h>
using namespace std;
int main()
{
    string s;
    getline(cin, s);
    int found = 0; // there is not any word or character
    int cnt = 0;
    for (char c : s)
    {
        if (isalpha(c)) // found a leter
        {
            if (found == 0) // check is it a starting of a word
            {
                cnt++;
                found = 1; // starting running a word
            }
        }
        else // found no leter
        {
            found = 0; // say the word is finished
        }
    }
    cout << cnt << endl;
    return 0;
}