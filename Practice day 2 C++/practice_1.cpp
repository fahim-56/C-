#include <bits/stdc++.h>
using namespace std;
class Student
{
public:
    char name[100];
    int roll;
    char section;
    double math_marks;
    int cls;
    Student(char *name, int roll, double math_marks)
    {
        strcpy(this->name, name);
        this->math_marks = math_marks;
        this->roll = roll;
    }
};
int main()
{
    char f[100] = "Fahim";
    char t[100] = "Tonmoy";
    char k[100] = "Kawshik";

    Student *obj1 = new Student(f, 27, 85);
    Student *obj2 = new Student(t, 28, 95);
    Student *obj3 = new Student(k, 29, 90);
    // cout << obj1->name << " " << obj1->roll << " " << obj1->math_marks << endl;
    // cout << obj2->name << " " << obj2->roll << " " << obj2->math_marks << endl;
    // cout << obj3->name << " " << obj3->roll << " " << obj3->math_marks << endl;
    int mx = max({obj1->math_marks, obj2->math_marks, obj3->math_marks});
    if (mx == obj1->math_marks)
    {
        cout << obj1->name << endl;
    }
    else if (mx == obj2->math_marks)
    {
        cout << obj2->name << endl;
    }
    else
    {
        cout << obj3->name << endl;
    }
    return 0;
}