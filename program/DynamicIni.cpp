#include<iostream>
#define PI 3.14;
using namespace std;
int main(){
    int a=10;
    int b=30, c;
    const int temp = 20;

    c= a+b;  // dynamic initialization

    cout<<"\nC:"<< c;
    cout<<"\nPI :"<<PI;
    cout<<"\ntemp :" <<temp;
    
}