#include <bits/stdc++.h>
using namespace std;
int main()
{
    string s;

    // cout << s.size() << endl; // 0

    // s = "Fahim Chowdhury";
    // cout << s.size() << endl; // 15

    // cout << s.max_size() << endl; // 1073741823

    // cout << s.capacity() << endl; // 15

    // s = "Md Fahim Ashraf Chowdhury";
    // cout << s.capacity() << endl; // Now 30 But unfixed even not equal size
    // cout << s.size() << endl;     // 25

    // s.clear();
    // cout << s << endl;
    // cout << s.capacity() << endl;   //
    // cout << s.size() << endl;       //0

    // if(s.empty())
    // {
    //     cout<<"Khali"<<endl;
    // }
    // else
    // {
    //     cout<<"Khali na"<<endl;
    // }

    // s = "Fahim Ashraf Chowdhury";
    // cout<<s.size()<<endl;
    // s.resize(5);
    // cout<<s.size()<<endl;
    // cout<<s<<endl;

    // cout<<s.size()<<endl;
    // s.resize(25,':');
    // cout<<s.size()<<endl;
    // cout<<s<<endl;

    s = "Fahim Ashraf Chowdhury";
    cout << s.size() << endl;
    int x=s.size();
    cout << s << endl;
    s.resize(6);
    cout << s.size() << endl;
    cout << s << endl;
    s.resize(x, ':');
    cout << s.size() << endl;
    cout << s << endl;



    return 0;
}