#include<iostream>
using namespace std;
class A
{

  public:
      int a;
      A()
      {
          cout<<"enter the value :";
          cin>>a;
      }
};
class B:public A
{
    int b,i;
public:
    void display();
    B()
    {
     cout<<"enter the value :";
     cin>>b;
    }
};
 void B::display()
 {
    i=a+b;
    cout<<i;
 }
int main()
{
    B n;
     n.display();
}
