#include <iostream>
using namespace std;

class saving
{
    int bal;

public:
    saving()
    {
        bal = 100000;
    }

    void s_dep(int n)
    {
        bal = bal + n;
    }

    void s_with(int n)
    {
        if (bal >= n)
            bal = bal - n;
        else
            cout << "You Don't have Money To withdrow:";
    }

    int s_show()
    {
        return bal;
    }
};

class current : public saving
{
    int bal;

public:
    current()
    {
        bal = 50000;
    }
    void c_dep(int n)
    {
        bal = bal + n;
    }

    void c_with(int n)
    {
        if (bal >= n)
            bal = bal - n;
        else
            cout << "You Don't Have Money To Withdrow:";
    }

    int c_show()
    {
        return bal;
    }
};

class bank : public saving
{
public:
    bank()
    {
        cout << "\t\t......Wel-Come TO Our Bank............\n";
        cout << "\t\t......................................\n";
    }

    ~bank()
    {
        cout << "\t\t......................................\n";
        cout << "\t\t.....Thank You........................\n";
    }
};

int main()
{
    bank b;
    current i;
    int ch, a, amt;
    cout << "\n1.Saving \n2.Current\n";
    cout << "Enter Your Account Type:";
    cin >> ch;
    cout << "\n1.Deposite \n2.Withdrow \n3.Show Balance \n0.Exit";
    while (a != 0)
    {
        cout << "\n Enter Your Choice:";
        cin >> a;
        switch (a)
        {
        case 1:
            cout << "Enter Amount For Deposite:";
            cin >> amt;
            if (ch == 1)
                b.s_dep(amt);
            else
                i.c_dep(amt);
            break;
        case 2:
            cout << "Enter Amount For Withdrow:";
            cin >> amt;
            if (ch == 1)
                b.s_with(amt);
            else
                i.c_with(amt);
            break;
        case 3:
            if (ch == 1)
                cout << "Your Saving Account Balance is:" << b.s_show();
            else
                cout << "Your Current Account Balance is:" << i.c_show();
            break;
        case 0:
            break;
        default:
            cout << "Wrong choice !";
            break;
        }
    }
}
