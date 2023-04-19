//1.	Program to find sum and average of two numbers.

#include<iostream>
using namespace std;
int main()
{
    int a,b,sum=0;
    float avg;

    cout<<"Enter number : ";
    cin>>a;

    cout<<"\nEnter number : ";
    cin>>b;

    sum=a+b;
    cout<<"Sum : "<<sum;

    avg=(float)(a+b)/2.0;
    cout<<"\nAvrage number : "<<avg;



    return 0;
 
}