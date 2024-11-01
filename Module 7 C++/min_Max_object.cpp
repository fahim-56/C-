#include <bits/stdc++.h>
using namespace std;
class Student
{
public:
    string name;
    int id;
    int marks;
};
int main()
{
    // Fahim 10 89
    // Tonmoy 21 90
    // Kawshik 12 86
    // Muhammad 1 99
    // Saleh 2 98
    int n;
    cin >> n;
    // Student arr[n];
    Student *arr = new Student[n];
    for (int i = 0; i < n; i++)
    {
        cin >> arr[i].name >> arr[i].id >> arr[i].marks;
    }
    // for (int i = 0; i < n; i++)
    // {
    //     cout << arr[i].name << " " << arr[i].id << " " << arr[i].marks << endl;
    // }
    Student mn;
    Student mx;
    mn.marks = INT_MAX;
    mx.marks = INT_MIN;
    for (int i = 0; i < n; i++)
    {
        if (arr[i].marks < mn.marks)
        {
            mn = arr[i];
        }
        if (arr[i].marks > mx.marks)
        {
            mx = arr[i];
        }
    }
    cout << mn.name << " " << mn.id << " " << mn.marks << endl;
    cout << mx.name << " " << mx.id << " " << mx.marks << endl;
    return 0;
}