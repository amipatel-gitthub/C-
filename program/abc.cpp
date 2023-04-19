//9.	C program to multiply two numbers using the plus operator.

#include<iostream>
using namespace std;
int main()
{
   int a,b,total=0,i;

   cout<<"Enter number : ";
   cin>>a;

   cout<<"Enter number : ";
   cin>>b;

    for(i=1; i<=b; i++)
    {
        total += a;

    }

    cout<<"Total : "<<total;

   return 0;
}