//14.	C program to find the area and perimeter of the rectangle.

#include<iostream>
using namespace std;
int main()
{
    int rect,lr,br,pr;

    cout<<"Enter Length : ";
    cin>>lr;

    cout<<"Enter Breadth : ";
    cin>>br;

    rect = lr * br;
    cout<<"Area of Rectangle : " <<rect;

    pr = 2*(lr+br);
    cout<<"\nParameter of Rectangle : " <<pr;


    return 0;
 
}