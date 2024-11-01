#include <bits/stdc++.h>
using namespace std;
void rec(stringstream &ss)
{
    string word;
    
    if (ss >> word)
    {
        cout << word << endl;
        rec(ss);
    }

    // ss >> word;
    // if (word != "\0")
    // {
    //     cout << word << endl;
    //     rec(ss);
    // }
}

int main()
{
    string s = "I am a Super Hero";
    stringstream ss;
    ss << s;
    rec(ss);

    // stringstream ss2;
    // ss2 << s;
    // string word;
    // while (ss2 >> word)
    // {
    //     cout << word << endl;
    // }

    return 0;
}