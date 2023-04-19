//13.	Calculate the distance between two cities from 
//kilometers to meters, centimeters, feet and inches using the C program.

#include<iostream>
using namespace std;
int main()
{
    int km,mtr,cm,ft,inch;

    cout << "\nPlease Enter the Length in Kilometers (km)  =  ";
    cin >> km;

    mtr = km * 1000.0;
    cout << km << " Kilometers  = " << mtr << " Meters" << endl;

  	cm = km * 100000.0; 
    cout << km << " Kilometers  = " << cm << " Centimeters" << endl;

    ft = km * 3280.84;
    cout << km << " Kilometers  = " << ft << " Feet" << endl;

    inch = km * 39370.1;
    cout << km << " Kilometers  = " << inch << " Inches" << endl;

    return 0;
}