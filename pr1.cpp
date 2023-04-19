#include<iostream>
using namespace std;

int main()
{
    int a[20],n,i;

    cout<<"Enter size of array :";
    cin>>n;

    for(i=0; i<n; i++)
    {         
        cin>>a[i];
    }

    cout<<"\nElement of array :";

    for(i=0; i<n; i++)
    {
        cout<<a[i]<<" ";
       
        if(a[0] < a[i])
            a[0] = a[i];

    }
    cout << endl << "Largest element = " << a[0];

    return 0;
}

