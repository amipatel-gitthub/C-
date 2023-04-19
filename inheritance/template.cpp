#include<iostream>
using namespace std;

template<class T>
void display(T t1)
{
    cout<<"display template :"<<t1<<endl;
}

template <class x, class y>
void Diasplay(x a, y b)
{
    cout<<"Displaying Template : "<<a<<"\t"<<b<<endl;
}

int main()
{
    display (200);
    display (12.56);
    display ('G');

    Diasplay ('G',1.25);
    Diasplay ('X',25);
    Diasplay (25,1.25);
    return 0;
}
