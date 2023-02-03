#include<iostream>
using namespace std;
int main()
{
    int i,j,m,n,a;
    cout<<"enter the value : ";
    cin>>a;
    for(i=0;i<a;i++)
    {
        for(j=1;j<a-i;j++)
        {
          cout<<" ";
        }
        for(n=1;n<=i;n++)
        {
          cout<<"*";
        }
        for(m=n;m>=1;m--)
       {
          cout<<"*";
        }
          cout<<"\n";
    }
    for(i=a-1;i>=0;i--)
    {
        for(j=1;j<a-i;j++)
        {
            cout<<" ";
        }

        for(n=1;n<=i;n++)
        {
            cout<<"*";
        }
        for(m=n;m>=1;m--)
        {
            cout<<"*";
        }
        cout<<"\n";
    }

}
