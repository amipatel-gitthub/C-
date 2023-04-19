//9.	C program to multiply two numbers using the plus operator.

#include<iostream>
using namespace std;
int main()
{
   int a,b,total,a1,b1;

   cout<<"Enter number : ";
   cin>>a;

   cout<<"Enter number : ";
   cin>>b;

   a1 = a+a;
   b1 = b+b;

   total = a1 + b1;
   cout<<"Total : " <<total;

   return 0;
}