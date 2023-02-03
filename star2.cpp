#include<iostream>
using namespace std;
int main()
{
    int i,j,m,n,a;
    cout<<"Enter the value: ";
    cin>>a;
    for(i=a-1;i>=0;i--)
    {
        for(j=1;j<a-i;j++)
        {
            cout<<" ";
        }

        for(n=1;n<=i;n++)
        {
            cout<<n;
        }
        for(m=n-j;m>=1;m--)
        {
            cout<<m;
        }
        cout<<"\n";


    }
}
