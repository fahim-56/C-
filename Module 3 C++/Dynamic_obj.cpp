#include <bits/stdc++.h>
using namespace std;
class Student
{
    public:
    int id;
    char sec;
    double cgpa;
    Student(int id, char sec, double cgpa)
    {
        this->id = id;
        this->sec = sec;
        this->cgpa = cgpa;
    }
};
int main()
{
    Student* obj=new Student(127,'c',3.85);
    cout<<obj->id<<" "<<obj->sec<<" "<<obj->cgpa<<endl;
    return 0;
}