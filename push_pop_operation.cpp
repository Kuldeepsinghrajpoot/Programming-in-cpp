#include<iostream>
using namespace std;
int main()
{

    int a[10],i,n,m;
    cout<<"enter the value of array";
    cin>>m;
    do
        {
    for(i=0;i<m;i++)
    {
        cin>>a[i];
    }
    for(i=0;i<m;i++)
    {
        cout<<a[i];

    }
    cout<<"\npop operation:";
    cout<<"\n\nenter the value of pop : \n";
    cin>> n;
    for(i=0;i<n;i++)
    {
        cout<<a[i];
    }
    cout<<"\nafter pop operation value's : \n";
    for(i=n;i<m;i++)
    {
        cout<<a[i];
        cout<<"\n";
    }
        }while(1);
}
