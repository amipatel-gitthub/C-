//student result with grade min. suject 3... display all mark ,grade ,total

#include<iostream>
using namespace std;

void res(int m1,int m2,int m3,int total,float
 pr)
{
    cout<<"\nsub1\tsub2\tsub3\tTotal\tPer.\tGrade"<<endl;
    cout<<m1<<"\t"<<m2<<"\t"<<m3<<"\t"<<total<<"\t"<<pr;
    if(m1<35 || m2<35 || m3<35)
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

void getdata(int m1,int m2,int m3)
{
    int total;
    float pr;

    total=m1+m2+m3;
    //cout<<"\n Total : "<<total;

    pr =(float)total / 3;
   // cout<<"\n Percentage : "<<pr;
    res(m1,m2,m3,total,pr);
    
}

void setdata()
{
    int m1,m2,m3;

    cout<<"Enter mark 1 : ";
    cin>>m1;

    cout<<"\nEnter mark 2 : ";
    cin>>m2;

    cout<<"\nEnter mark 3 : ";
    cin>>m3;

    getdata(m1,m2,m3);
}

int main()
{
    setdata();
   
}