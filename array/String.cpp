#include<iostream>
#include<string>

using namespace std;
int main(){

    string name;
    name = "Skill Qode";
    string str;
    str= "Institute";
    
    cout<<"\nLengnth :"<<name.length();
    name.pop_back();
    cout<<"\nPop :"<<name;
    name.push_back(' ');
    name.push_back('I');
    name.push_back('T');
    cout<<"\nPush :"<<name;

    cout<<"\n Append : "<<name.append(str)<<endl;
    cout<<name<<endl;
    cout<<"\n Str replce: "<<name.replace(0,10,"Hello");
    string ex;
    cout<<"\n IsEmpty :"<<ex.empty();
    
}