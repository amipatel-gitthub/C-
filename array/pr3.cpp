#include<iostream>

using namespace std;

int main()
{
    int a[20],n,i;

    cout<<"Enter size of array : ";
    cin>>n;

    cout<<"\nyour elements of array : ";
    
    for(i=0; i<n; i++)
    {
        cin>>a[i];
    }

    cout<<"\nodd number : ";

    for(i=0; i<n; i++)
    {
        if(a[i]%2 != 0)
        {
            cout<<a[i]<<endl;
        }
    }

    cout<<"\nEven number : ";


    for(i=0; i<n; i++)
    {
        if(a[i]%2 == 0)
        {
            cout<<a[i]<<endl;
        }
    }

    return 0;

}
