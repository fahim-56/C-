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
Student *fun()
{
    Student *obj = new Student(127, 'c', 3.85);
    return obj;
}
int main()
{
    Student *obj = fun();

    cout << obj->id << " " << obj->sec << " " << obj->cgpa << endl;
    delete obj;
    cout << obj->id << " " << obj->sec << " " << obj->cgpa << endl;
    return 0;
}