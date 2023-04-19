//5.	C program to read marks and print percentage and division.

#include<iostream>
using namespace std;
int main()
{
    int m1,m2,m3,grade,total;
    float per;
    
    cout<<"Enter Mark 1 : ";
    cin>>m1;

    cout<<"\nEnter Mark 2 : ";
    cin>>m2;

    cout<<"\nEnter Mark 3 : ";
    cin>>m3;

    total = m1+m2+m3;
    cout<<"\nTotal : "<<total;
    
    per=total/3.0;
    cout<<"\npercentage : "<<per;

    if(per>=75)
        cout<<"\n A grade";

    else if(per>=60 && per<75)
        cout<<"\n B grade";

    else if(per>=45 && per<60)
        cout<<"\n C grade";

    else if(per>=35 && per<45)
        cout<<"\n D grade";

    else if(per<=35)
        cout<<"\n FAIL...";

   
    return 0;
 
}