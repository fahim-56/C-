#include <bits/stdc++.h>
using namespace std;
class Student
{
public:
    int id;
    char name[101];
    char sec;
    int mark;
};
int main()
{

    int t;
    cin >> t;
    while (t--)
    {
        Student a, b, c;
        cin >> a.id >> a.name >> a.sec >> a.mark;
        cin >> b.id >> b.name >> b.sec >> b.mark;
        cin >> c.id >> c.name >> c.sec >> c.mark;
        int mx = max({a.mark, b.mark, c.mark});
        if (mx == a.mark)
        {
            cout << a.id << " " << a.name << " " << a.sec << " " << a.mark;
        }
        else if (mx == b.mark)
        {
            cout << b.id << " " << b.name << " " << b.sec << " " << b.mark;
        }
        else
        {
            cout << c.id << " " << c.name << " " << c.sec << " " << c.mark;
        }
        cout << endl;
    }
    return 0;
}