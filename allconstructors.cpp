#include<iostream>
#include<string>
using namespace std;

class Student
{
    private:
    string name;
    int marks;

    public:

    Student()
    {
        cout<<"Default constructor";
    }

    Student(string n,int m)
    {
        name = n;
        marks = m;
        cout<<"\nParameterized constructor";
    }

    Student (const Student &s)
    {
        name = s.name;
        marks = s.marks;
        cout<<"\nCopy constructor";
    }

    void display()
    {
        cout<<name<<"-"<<marks;
    }
};

int main()
{
    Student s1;

    Student s2("abcd",20);

    Student s3(s2);

    cout<<"\n Data : \n";

    s1.display();
    s2.display();
    s3.display();

    return 0;

}