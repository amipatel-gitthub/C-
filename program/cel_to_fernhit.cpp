//6.	C program to convert temperature from Fahrenheit to Celsius and vice versa.

#include<iostream>
using namespace std;
int main()
{
   int cel,fer;

   cout<<"Enter celsius : ";
   cin>>cel;

   fer=(cel * 9/5)+32;
   cout<<"Fahrenheit : "<<fer;
}