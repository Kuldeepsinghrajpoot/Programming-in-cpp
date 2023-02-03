#include<iostream>
using namespace std;
    int cube(int y)
    {
         return(y*y*y);

    }
    int cube (int l,int h, int w)
    {
        return (l*w*h);
    }
 int main()
{
    int a,b,c,d;
    cout<<"Enter the value of cube :";
    cin>>a;
    cout<<"cube is :";
    cout<<cube(a);
    cout<<"\nenter the value of cuboid :\n";
    cin>>b>>c>>d;
    cout<<"\ncuboid is :";
    cout<<cube(b,c,d);
}

