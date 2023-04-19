//3.	Program to calculate simple interest.

#include<iostream>
using namespace std;
int main()
{
   float amt,rate,time,total;

   cout<<"Enter Amoumt : ";
   cin>>amt;

   cout<<"Enter Rate : ";
   cin>>rate;

   cout<<"Enter Time : ";
   cin>>time;

   total = (amt*rate*time)/100;
   cout<<"Simple interest : "<<total;

    return 0;
 
}