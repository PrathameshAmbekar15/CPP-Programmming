#include<iostream>
using namespace std;

int main()
{
    for(int i=1;i<=4;i++)
    {
        for(int j=1;j<=i;j++)
        {
            if(i%2==0)
            {
                cout<<j<<" ";
            }
            else
            {
                cout<<char('A' + j-1);
            }

        }

        cout<<"\n";
    }

}