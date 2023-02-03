#include<iostream>
using namespace std;
class account
{
    int a,m,l=0,sum=0;
public :
    void dtt()
    {
     cout<<"enter the Deposit money :";
     cin>>a;
      sum=sum+a;
    }
    void wtt()
    {
       cout<<"total money :"<<sum;
        cout<<"\nenter the Withdrawal money :";
        cin>>m;

    }
    void diaplay()
    {
        if(sum>=m)
            {
             l=sum-m;
             cout<<"after Withdraw money "<<l;
            }
        else
        {
            cout<<"not sufficient money in your account ";
        }
    }
};
int main()
{
    account s;
    s.dtt();
    s.dtt();
    s.wtt();
    s.diaplay();
    return 0;
}
