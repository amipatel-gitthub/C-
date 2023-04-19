//2.Write a C++ program to Swap the First and Last Value of a array

#include<iostream>
using namespace std;

int main()
{
    int a[20],temp,i,n;

    cout<<"Enter elements :";
    cin>>n;
    
    cout<<"\nEnter elements"<<endl;
    for(i=0; i<n; i++)
    {
        cin>>a[i];
    }

    temp=a[0];
    a[0]=a[n-1];
    a[n-1]=temp;

    cout<<"\n swap the first & last value :"<<endl;
    for(i=0; i<n; i++)
    {
        cout<<a[i]<<"\t";
    }

}