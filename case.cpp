#include<iostream>
using namespace std;
class num
{
   public:
    int a;
    int b;
    int c;
    void enter()
    {
    cout<<"Enter the value of a:";
    cin>>a;
    cout<<"Enter the value of b:";
    cin>>b;
    }

  void display()
  {
      c=a+b;
    cout<<"Addtion of two value:"<<c<<"\n";
  }
  void sub()
  {
  c=a*b;
  cout<<"multiply"<<c;
  }

};
  int main()
  {
       num n;
       n.enter();
       n.display();
       n.sub();


  }
