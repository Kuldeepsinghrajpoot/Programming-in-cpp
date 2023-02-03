#include<iostream>
using namespace std;
class large
{
    int a,b,c;
public:
    large()
    {
        cout<<"Enter the value \n";
        cin>>a>>b>>c;
    }
    void check()
    {
        if(a>b&&a>c)
        {
            cout<<"A is grater :"<<a;
        }
        if(b>a&&b>c)
        {
          cout<<"B is grater : "<<b;
        }
        if(c>a&&c>b)
        {
            cout<<"C is grater :"<<c;
        }
    }
};
  int main()
  {
      large l;
      l.check();
  }
