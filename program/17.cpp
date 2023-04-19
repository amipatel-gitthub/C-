//17.	C program to print ASCII values of all lowercase alphabets using goto statement.
 
#include<iostream>
using namespace std;
int main(){
    char ch='a';
    int n = 97;
up:
    if(n<= 122){
        cout<< ch<<" ";
        ch++;
        n++;
        goto up;
    }
return 0;

}
