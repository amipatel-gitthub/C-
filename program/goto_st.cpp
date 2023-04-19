//16.	C program to print ASCII values of all digits using goto statement
// 0 - 9  
#include<iostream>
using namespace std;
int main(){
    char ch='0';
    int n = 1;
up:
    if(n<= 10){
        cout<< int(ch)<<" ";
        ch++;
        n++;
        goto up;
    }
return 0;

}
