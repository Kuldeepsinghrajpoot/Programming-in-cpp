#include<iostream>
using namespace std;
int main()
{
    int p1,p2,i=1,j=1,sun,c=0,k=1,sun1,l2,l1, cont=0;
    cout<<"p1\t\t";
    cin>>p1;
    cout<<"p2\t\t";
    cin>>p2;
    sun=p1/4;
    sun1=p2/4;
    while(k<=5)
        {
        while(i<=sun)
    {
    if(p1>=4)
    {
        p1=p1-4;
        c=c+4;
        sun=p1;
        cout<<"\t,p1,"<<p1;
    }
     i++;
    }
    while(j<=sun1)
    {
    if(p2>=4)
    {
        p2=p2-4;
        cont=cont+4;
        cout<<"\ncont"<<cont;
    }
    cout<<"\n"<<p2;
    j++;
  }
  k++;
}
}
