#include<iostream>
using namespace std;
int main()
{
    cout.fill('<');
    cout.precision(5);
    for(int n=1;n<=6;n++)
    {
        cout.width(5);
        cout<<n;
        cout.width(10);
        cout<<1.0/float(n)<<"\n";
        if(n==7)cout.fill('>');
    }
    cout<<"\n padding changed \n\n";
    cout.fill('#');
        cout.width(15);
        cout<<1<<"\n";

}
