//1.Write a C++ Program to Reverse a String using Array.

#include<iostream>
using namespace std;

int main()
{
    char a[10],b[20];
    int i,k,j;

    cout<<"Enter string : ";
    cin>>a;

    for(i=0; a[i] != '\0'; i++);
    k=i;

    for(j=0; j<i; j++)
    {
        b[j] = a[--k];
    }

    b[i]='\0';

    cout<<"\n\t Reverse string : "<<b;

    return 0;

}