#include<iostream>
using namespace std;

class Complex
{
    private:
    int real;
    int imag;

    public:

    Complex(int r=0 , int i=0)
    {
        real = r;
        imag = i;
    }

    Complex operator+(Complex c)
    {
        Complex temp;
        temp.real = real + c.real;
        temp.imag = imag + c.imag;
        return temp;
    }

    void display()
    {
        cout<<real<<"+"<<imag<<"i";
    }
};

int main()
{
    Complex c1(10,20);
    Complex c2(20,10);
    Complex c3;
    c3 = c1+ c2;
    c3.display();

    return 0;
}