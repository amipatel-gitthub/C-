//2.	C program to find cube of an integer number using two different methods.

#include<iostream>
using namespace std;
int main()
{
    int a,n,i,cube=1;

    cout<<"Enter number : ";
    cin>>a;

   // s=a*a*a;
   // cout<<"cube : "<<s;

   for(i=1; i<=3; i++)
   {
        cube = cube * a;
   }

   cout<<" cube : "<<cube;

    return 0;
 
}