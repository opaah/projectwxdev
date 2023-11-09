#include <cstdlib>
#include <iostream>

using namespace std;

int fdx(int c1, int c2, int b1,int b2)
{
    int dx;
    dx = (c1*b2)-(b1*c2);
    return dx;
}
int fdy(int c1, int c2, int a1,int a2)
{
    int dy;
    dy = (a1*c2)-(c1*a2);
    return dy;
}
int fd(int a1, int a2, int b1,int b2)
{
    int d;
    d = (a1*b2)-(b1*a2);
    return d;
}
int main()
{
    int a1,a2,b1,b2,c1,c2,dx,dy,d,x,y;
    a1 = 2;
    a2 = 1;
    b1=-3;
    b2=2;
    c1=-13;
    c2=4;
    

    cout <<"Masukan Nilai a1 = "<<endl;
    cin >> a1;
    cout <<"Masukan Nilai a2 = "<<endl;
    cin >> a2;
    cout <<"Masukan Nilai b1 = "<<endl;
    cin >> b1;
    cout <<"Masukan Nilai b2 = "<<endl;
    cin >> b2;
    cout <<"Masukan Nilai c1 = "<<endl;
    cin >> c1;
    cout <<"Masukan Nilai c2 = "<<endl;
    cin >> c2;
    dx = fdx(c1,c2,b1,b2);
    dy = fdy(c1,c2,a1,a2);
    d= fd(a1,a2,b1,b2);
    x = dx/d;
    y = dy/d;
    cout <<"dx = "<<dx<<endl;
    cout <<"dy = "<<dy<<endl;
    cout <<"d = "<<d<<endl;
    cout <<"x = "<<x<<endl;
    cout <<"y = "<<y<<endl;
    system("PAUSE");
    return 0;
}
