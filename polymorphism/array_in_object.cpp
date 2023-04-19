#include<iostream>
using namespace std;

class student
{
    int m,s,e,total,pr;
    public:
        void setdata()
        {
            cout<<"Enter maths mark : ";
            cin>>m;

            cout<<"Enter science mark : ";
            cin>>s;

            cout<<"Enter english mark : ";
            cin>>e;
        }

        void getdata()
        {
            total = m + s + e;
            pr = total/3;
            //cout<<"Maths : "<<m<<endl;
            //cout<<"Science : "<<s<<endl;
            //cout<<"English : "<<e<<endl;
            //cout<<"Total : "<<total<<endl;
            //cout<<"Percentage : "<<pr<<endl;

             cout<<"\nsub1\tsub2\tsub3\tTotal\tPer.\tGrade"<<endl;
            cout<<m<<"\t"<<s<<"\t"<<e<<"\t"<<total<<"\t"<<pr;

            if(m<35 || s<35 || e<35)
		    {
			    cout<<"\t Fail ";
		    }

	        else
	        {
                if(pr >= 75)
                    cout<<"\t A ";
            
                else if(pr>=60 && pr<75)
                    cout<<"\t B ";
            
                else if(pr>=45 && pr<60)
                    cout<<"\t C ";
            
                else if(pr>=35 && pr<45)
                    cout<<"\t D ";
            
                 else if(pr<=35)
                    cout<<"\t Fail ";
            }
        }
};

int main()
{
    student s[5];
    int i;

    for(i=0; i<2; i++)
    {
        cout<<"Enter students detail : "<<i+1<<endl;
        s[i].setdata();
    }

    for(i=0; i<2; i++)
    {
        cout<<"Result Students : "<<i+1<<endl;
        s[i].getdata();
    }
    return 0;
}