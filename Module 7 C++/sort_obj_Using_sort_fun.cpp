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
//     if (a.marks <= b.marks)
//         return true;
//     else
//         return false;
// }
// bool cmp(Student a, Student b)
// {
//     if (a.marks >= b.marks)
//         return true;
//     else
//         return false;
// }
bool cmp(Student a, Student b)
{
    if (a.marks > b.marks)
        return true;
    else if (a.marks < b.marks)
        return false;
    else
    {
        if (a.id < b.id)
            return true;
        else
            return false;
    }
}

int main()
{
    // Fahim 3 89
    // Tonmoy 5 90
    // Kawshik 4 90
    // Muhammad 1 100
    // Saleh 2 90
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