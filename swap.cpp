#include<iostream>
using namespace std;
void swap(int &x,int &y)
{
   int temp;
   temp=x;
   //cout<<"\nvalue of temp:"<<temp;
   x=y;
   //cout<<"\n"<<"value of x:"<<x;
   y=temp;
   cout<<"\nvalue of x:"<<x;
   cout<<"\nvalue of y:"<<y;
}
int main()
{
    int a,b;
    cout<<"enter the value of a:";
    cin>>a;
    cout<<"enter the value of b:";
    cin>>b;
    swap(a,b);
}
