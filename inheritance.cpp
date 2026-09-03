#include<iostream>
#include<string>
using namespace std;

class Student
{
    public:
    string name;
    int age;

    Student()
    {

    };

};

class Person :public Student{
    public:
    int roll;

    void display()
    {
        cout<<"Name"<<name;
        cout<<"Age"<<age;
        cout<<"Roll"<<roll;
    }
};

int main()
{
    Person s1;
    s1.name = "ABCD";
    s1.age = 25;
    s1.roll = 20;
    s1.display();

    return 0;
}