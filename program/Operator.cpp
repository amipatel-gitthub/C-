#include<iostream>
using namespace std;
int main(){

    int a=10,b=20;
    int c;
    cout<<"binary Arithmatic Op";
    c= a+b;
    cout<<"\n + "<<c;
    cout<<"\n- "<<(a-b);
    cout<<"\n* "<<(a*b)<<endl;

    cout<<"Unary Arithmatic Op"<<endl;
    cout<<a++<<endl; // 11 10
    cout<<a<<endl;//11 //11

    cout<<++a<<endl; // 11 12
    cout<<a<<endl; //12 //12 


    int p=34,q=45;
    cout<<"Logical Operator"<<endl;
    cout<<"Logical And :"<<((p>q) && (a<b))<<endl;
    cout<<"Logical or :"<<((p>q) || (a<b))<<endl;
    cout<<"Logical not :"<<(p!= 34);

    return 0;

}