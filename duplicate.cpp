#include<iostream>
using namespace std;
int main()
{

    int p0,p1,p2;
    cout<<"p0";
    cin>>p0;
    cout<<"p1";
    cin>>p1;
    cout<<"p2";
    cin>>p2;
    if(p0>p1&&p0>p2)
    {
        cout<<"p0 :"<<p0;
    }
        if(p1>p0&&p1>p2)
    {
        cout<<"p1 :"<<p1;
    }
        if(p2>p0&&p2>p1)
    {
        cout<<"p2 :"<<p2;
    }


}
