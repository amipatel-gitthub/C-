#include<iostream>
using namespace std;

class result
{
      int  maths=70;
      int sci=80;
      int eng=76;
     int total;
     int pr;

    public:
     
     void setdata()
    {
        cout<<" Student Result "<<endl;
        cout<<"----------------------------"<<endl;
         cout<<"Maths : "<<maths<<endl;
         cout<<"Science : "<<sci<<endl;
         cout<<"English : "<<eng<<endl;
    }

   void getdata()
   {
       
        total = maths + sci + eng;
             cout<<"Total : "<<total<<endl;

       pr = total/3;
           cout<<"Percentage : "<<pr<<endl;
   }
 };

int main()
{
          result b;
             b.setdata();
             b.getdata();

         return 0;
}