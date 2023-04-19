//1. Write a C++ Program to add two matrix value and print in matrix form.

#include<iostream>
using namespace std;

int main()
{
    int a[20][20],b[20][20],n,i,j,s1=0,s2=0,sum=0;

    cout<<"Enter size of array :";
    cin>>n; 


    cout<<"\n Enter element of A : "<<endl;

    for(i=0; i<n; i++)
    {
        for(j=0; j<n; j++)
        {
            cin>>a[i][j];
        }
    }

    cout<<"\n";

    cout<<"\n Enter element of B : "<<endl;

    for(i=0; i<n; i++)
    {
        for(j=0; j<n; j++)
        {
            cin>>b[i][j];
        }
    }

    cout<<"\n Your Matrix of form..."<<endl;

     for(i=0; i<n; i++)
    {
        for(j=0; j<n; j++)
        {
            cout<<" "<<a[i][j]<<"\t";
            s1 += a[i][j];
        }

        cout<<"\t";
        for(j=0; j<n; j++)
        {
            cout<<" "<<b[i][j]<<"\t";
            s2 += b[i][j];
        }

        cout<<"\t";

         for(j=0; j<n; j++)
        {
            sum = a[i][j] + b[i][j];
            cout<<" "<<sum<<"\t";
        }
        cout<<"\n"<<endl;
    }

}