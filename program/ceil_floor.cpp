// ceil , floor , trunc 
/*
x = 1.34 y=1.45  z= 1.76
**/

#include<iostream>
#include<cmath>
using namespace std;

int main(){
    float  x = 1.34,y=1.45,z= 1.76;
    float a = -2.233,b=-2.564;

    cout<<ceil(x)<<endl; // 1  // maximum value
    cout<<ceil(y)<<endl; // 1
    cout<<ceil(z)<<endl; // 1

    cout<<ceil(a)<<endl; // -2
    cout<<ceil(b)<<endl; // -2

    cout<<floor(x)<<endl; // 1  // miminum value
    cout<<floor(y)<<endl; // 1
    cout<<floor(z)<<endl; // 1


    cout<<floor(a)<<endl; // -3
    cout<<floor(b)<<endl; // -3
    
    cout<< trunc(x)<<endl; //1  // convert int value remove fractional part
    cout<< trunc(z)<<endl; // 1

    cout<<round(z)<<endl; //2  // round add 1 if fractional part above 5
    cout<<round(x)<<endl; // 1

return 0;


}
