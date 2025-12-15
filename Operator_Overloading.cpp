#include<iostream>

using namespace std;

class complex1
{
    float real, img;
public:
    complex1()
    {
        real=0;
        img=0;
    }
    complex1(float r, float i)
    {
        real=r;
        img=i;
    }
    void show()
    {
        cout << real << "+i" << img << endl;
    }
    complex1 operator +(complex1 &p);
};
a
complex1 complex1 :: operator +(complex1 &p)
{
    complex1 w;
    w.real=real+p.real;
    w.img=img+p.img;
    return w;//((real+p.real) + (img+p.img));
}

int main()
{
    complex1 s(3,4);
    complex1 t(4,5);
    complex1 m;
    m=s+t;
    s.show();
    t.show();
    m.show();
}