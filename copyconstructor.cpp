#include<iostream>
#include<string>
using namespace std;

class Student 
{
    private:
    string name;
    int age;

    public:

    Student()
    {
        cout<<"Default constructor";
    }

    Student(string n , int a)
    {
        name = n;
        age = a;
        cout<<"\nParameterized constructor";
    }

    Student(const Student &s)
    {
        name = s.name;
        age = s.age;
    }

    void display()
    {
        cout<<"\nName : "<<name;
        cout<<"\nAge : "<<age;
    }
};

int main()
{
    Student s1("ABCD",20);

    Student s2(s1);

    cout<<"\nStudent 1: ";
    s1.display();

    cout<<"\nStudent 2: ";
    s2.display();

    return 0;
}