#include<iostream>
using namespace std;
int main()
{
    int a[10],b[5],i,j;
    for(i=0;i<4;i++)
    {
        cin>>a[i];
    }
    for(j=0;j<4;j++)
    {
        cin>>b[j];
    }
    cout<<"a";
    for(i=0;i<4;i++)
    {
        cout<<a[i]<<"\n";
    }
    cout<<"b";
    for(j=0;j<4;j++)
    {
        cout<<b[j];
    }
}
