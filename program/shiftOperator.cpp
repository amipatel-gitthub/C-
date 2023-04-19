#include<iostream>
using namespace std;
int main(){

    int a=5,b=9; 
    cout<<"BitwiseOp "<<endl; 
    cout<<"bitwise & "<< (a&b)<<endl;  //  001
    cout<<"bitwise |"<< (a|b)<<endl;
    cout<<"bitwise ~"<<~a<<endl;
    cout<<"bitwise ^"<<(a^b)<<endl;

    cout<<"Shift operator left"<<(a<<2)<<endl;  // a* (2*2) 4 *5
    cout<<"Shift operator right "<<(a>>2); // a /(2*2)

      cout<<"Ternory operator "<<endl;  
      (a > b) ? cout<<a : cout<<b;

}
