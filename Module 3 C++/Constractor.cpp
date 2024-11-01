#include <bits/stdc++.h>
using namespace std;
class Student
{
public:
    int roll;
    int cls;
    double gpa;
    Student(int r, int c, double g)
    {
        roll = r;
        cls = c;
        gpa = g;
    }
};

// use this pointer keyword
class Std2
{
public:
    char roll;
    int cls;
    double gpa;
    Std2(char roll, int cls, double gpa)
    {
        this->roll = roll;
        // (*this).roll=roll;
        this->cls = cls;
        // (*this).cls = cls;
        this->gpa = gpa;
        // (*this).gpa = gpa;
    }
};
int main()
{
    Student fahim(1, 15, 5.00);
    cout << fahim.roll << " " << fahim.cls << " " << fahim.gpa << endl;
    Student Tonmoy(5, 10, 5.00);
    cout << Tonmoy.roll << " " << Tonmoy.cls << " " << Tonmoy.gpa << endl;

    Std2 fahim1('F', 15, 5.00);
    cout << fahim1.roll << " " << fahim1.cls << " " << fahim1.gpa << endl;

    return 0;
}