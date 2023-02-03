#include<iostream>
using namespace std;
class s
{
    protected:
    int a;
public:
    s ( )
    {
        a=10;
    }

};
class q :public s
{
  int b;
  public:
      friend int add(s q);
  q()
  {
     b=10;
  }
};
  add()
  {
      return(p.a+p.b);
  }
  int main()
  {
      q c;
     // c.num(10,10);
      cout<<add(c);

  }
