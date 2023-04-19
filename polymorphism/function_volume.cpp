#include <iostream>
using namespace std;

class volume_shape
{
public:
    void volume(int a, int b, int c)
    {
        // V = l × w × h
        cout << "Cuboid : " << a * b * c << endl;
    }

    void volume(int a)
    {
        // V = a3
        cout << "Cube : " << a * a * a << endl;
    }

    void volume(float k, int A, int a, int b)
    {
        // V = πr2h
        cout << "Cylinder : " << k * A * a * b << endl;
    }
};

int main()
{
    volume_shape a;
    a.volume(10, 20, 30);
    a.volume(10);
    a.volume(3.14, 5, 5, 5);
    return 0;
}