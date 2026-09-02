#include<iostream>
#include<string>
using namespace std;

class Teacher
{
    private:
    string name;
    int age;

    public:
    

    //Default constructor

     Teacher(){
        cout<<"Default Constructor";
     }

     //Parameterized constructor

     Teacher(string n,int a)
     {
        name = n;
        age = a;
     }

     void display()
     {
        cout<<"Name : "<<name;
        cout<<"\nAge :"<<age;
     }

};

int main()
{
    Teacher t1("ABCD",20);
    Teacher t2(t1);
    //t1.display();
    t2.display();

    return 0;
}