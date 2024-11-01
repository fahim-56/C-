#include <bits/stdc++.h>
using namespace std;
class Student
{
public:
    string name;
    int marks;
    int id;
};
// bool cmp(Student a, Student b)
// {
//     return a.marks<=b.marks;
// }
bool cmp(Student a, Student b)
{
    if (a.marks == b.marks)
    {
        return a.id < b.id;
    }
    else
    {
        return a.marks > b.marks;
    }
}

int main()
{
    // Fahim 3 89
    // Tonmoy 5 90
    // Kawshik 4 90
    // Muhammad 1 100
    // Saleh 2 99
    int n;
    cin >> n;
    Student arr[n];
    for (int i = 0; i < n; i++)
    {
        cin >> arr[i].name >> arr[i].id >> arr[i].marks;
    }
    sort(arr, arr + n, cmp);

    for (int i = 0; i < n; i++)
    {
        cout << arr[i].name << " " << arr[i].id << " " << arr[i].marks << endl;
    }
    return 0;
}