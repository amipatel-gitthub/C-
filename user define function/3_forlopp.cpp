//for loop -n to +n print

#include<iostream>
using namespace std;

int loop(int n)
{
    int i;

    
    for(i=-n; i<=n; i++)
    {
        cout<<"\n "<<i;
    }
}

int main()
{
    int n;

    cout<<"Enter number : ";
    cin>>n;

    loop(n);
}