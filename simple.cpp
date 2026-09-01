#include<iostream>
#include<string>
using namespace std;

class Student
{
    public:
    
    int age;
    string name;
    double salary;

    
    void display()
    {
        cout<<"Name :"<<name;
        cout<<"\nAge: "<<age;
        cout<<"\nSalary: "<<salary;
    }

};

int main()
{
    Student s1;
    s1.name="Prathamesh";
    s1.age=21;
    s1.salary=5000;

    s1.display();

    return 0;
}