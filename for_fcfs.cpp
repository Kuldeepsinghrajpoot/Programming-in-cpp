#include<iostream>
using namespace std;
int main()
{
    int n[10],i,a;
     float sum=0,l=0,sum1=0,sum3=0,sum4=0;
  cout<<"Enter the value ";
  cin>>a;
    for(i=0;i<a;i++)
    {
        cout<<"p"<<i<<"\t";
        cin>>n[i];
    }
    for(i=0;i<a;i++)
    {
        cout<<"p"<<i<<"\t";
        sum=sum+n[i];
        cout<<sum;
    }
    cout<<"\n";
    cout<<"avrage wating time\n";

    for(i=1-1;i<a;i++)
    {
       cout<<"p"<<i<<"\t";
        l=l+n[i];

        cout<<l<<"\n";
    }

    cout<<"time is"<<l<<"\n";
    sum1=l/5;
    cout<<"avrage time is "<<sum1;

    cout<<"\n";
    cout<<" turn around time\n";

    for(i=0;i<a;i++)
    {
       cout<<"p"<<i<<"\t";
        sum3=sum3+n[i];
        cout<<sum3<<"\n";

    }

    cout<<"avrage is"<<sum3<<"\n";
    sum4=sum3/5;
    cout<<"avrage rurn around :"<<sum4;


}
