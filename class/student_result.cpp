#include <iostream>
using namespace std;

class result
{
    int m1, m2, m3, total, per;

 public:
    void mark()
    {
        cout << "Enter sub-1 : ";
        cin >> m1;

        cout << "\nEnter sub-2 : ";
        cin >> m2;

        cout << "\nEnter sub-3 : ";
        cin >> m3;
    }

    void setdata()
    {
        total = m1 + m2 + m3;
        cout << "Total : " << total;

        per = total / 3;
        cout << "\nPercentage : " << per;
    }

    void getdata()
    {
        cout << "\nsub1\tsub2\tsub3\tTotal\tPer.\tGrade" << endl;
        cout << m1 << "\t" << m2 << "\t" << m3 << "\t" << total << "\t" << per;
        if (m1 < 35 || m2 < 35 || m3 < 35)
        {
            cout << "\t Fail ";
        }
        else
        {
            if (per >= 75)
                cout << "\t A ";

            else if (per >= 60 && per < 75)
                cout << "\t B ";

            else if (per >= 45 && per < 60)
                cout << "\t C ";

            else if (per >= 35 && per < 45)
                cout << "\t D ";

            else if (per <= 35)
                cout << "\t Fail ";
        }
    }
};

int main()
{
    result abc;
    abc.mark();
    abc.setdata();
    abc.getdata();
}