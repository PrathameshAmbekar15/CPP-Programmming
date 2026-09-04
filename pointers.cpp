// using pointers for dynamic student object 


#include<iostream>
using namespace std;

class Student
{
    private:
    int age;
    string name;

    public:

    void accept()
    {
        cout<<"\nName: ";
        cin>>name;
        cout<<"\nAge: ";
        cin>>age;

    }

    void display()
    {
        cout<<"\nName: "<<name;
        cout<<"\nAge: "<<age;
    }
};

int main()
{
    Student *ptr = new Student;

    ptr->accept();
    ptr->display();

    delete ptr;
    ptr = nullptr;

    return 0;

}   