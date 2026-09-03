#include<iostream>
using namespace std;

int main()
{
    char source[] = "abcd";
    char destination[60];

    char *strsrc = source;
    char *strdest = destination;

    while(*strsrc != '\0')
    {
        *strdest = *strsrc;
        strsrc++;
        strdest++;
    }

    *strdest = '\0';

    cout<<"Copied string"<<destination;
    return 0;


}