#include <bits/stdc++.h>
using namespace std;
// class student
// {
// public:
//     int id;
//     char sec;
//     double cgpa;

//     student(int id, char sec, double cgpa)
//     {
//         this->id = id;
//         this->sec = sec;
//         this->cgpa = cgpa;
//     }
// };

// student fun()
// {
//     student obj(27, 'c', 3.80);
//     return obj;
// }
// int main()
// {
//     student obj = fun ();
//     cout << obj.id << " " << obj.sec << " " << obj.cgpa << endl;
//     return 0;
// }
class cls
{
public:
    int n;
    string s;
    cls(int n, string s)
    {
        this->n = n;
        this->s = s;
    }
};
cls fun()
{
    cls obj(1, "Fahim");
    return obj;
}
int main()
{
    cls a = fun();
    cout << a.n << " " << a.s;
    return 0;
}