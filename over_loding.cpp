#include<iostream>
using namespace std;
class num
{
    int a=0,b=0;
public:
    void cal(int x, int y)
    {
        //int x,y;
        a=x;
        cout<<"a="<<a<<","<<"x="<<x<<endl;
        b=y;
        cout<<"b="<<a<<","<<"y="<<y<<endl;
    }
    void display()
    {
        cout<<a<<":"<<b<<endl;
    }
    num operator +(num m)
    {

        a=a+m.a;
        b=b+m.b;
        display();
    }
};
  int main()
  {
      num n1,n2;
      n1.cal(10,2);
      n2.cal(10,20);
     num n3=n1+n2;

  }
