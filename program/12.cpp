//12.	C program to find the sum of all numbers from 0 to N without using a loop.

#include<iostream>
using namespace std;
int main()
{
  int sum,n;

  cout<<"Enter number : ";
  cin>>n;

  sum = n*(n+1)/2;

  cout<<"\nSum : "<<sum;
}