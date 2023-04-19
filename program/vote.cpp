//4.	C program to check whether a person is eligible for voting or not?


#include<iostream>
using namespace std;
int main()
{
    int age;
    

    cout<<"Enter person Age : ";
    cin>>age;

    if(age>18)
        cout<<"Person is eligible for vote...";

    else
        cout<<"Person is not eligible for vote...";
   
    return 0;
 
}