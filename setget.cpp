#include<iostream>
using namespace std;

class Student
{
    public:
    double salary;

    void setSalary(double s)
    {
        salary = s;
    }

    double getSalary()
    {
        return salary;
    }

    void display()
    {
        cout<<"Salary : "<<getSalary();
    }
};

int main()
{
    Student s1;
    s1.setSalary(5000);
    s1.display();
    
    return 0;
}