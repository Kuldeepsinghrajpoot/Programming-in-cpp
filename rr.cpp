#include<iostream>
using namespace std;
int main()
{
    int p1,p2,i=1,s1;
    cout<<"p1\t";
    cin>>p1;
    //cout<<"p2\t";
    //cin>>p2;
    abc:
     s1=p1/4;
     {
     p1=p1-4;
     cout<<p1;
     i++;
     }
     if(i<s1)
     {
         goto abc;
     }
}
