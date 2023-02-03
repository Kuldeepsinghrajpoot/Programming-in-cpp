#include<iostream>
using namespace std;
class q;
class s
{
    protected:
    int a;
public:
    friend int add(s,q);
    s ( )
    {
        a=10;
    }
};
class q
{
protected:
    int b;
public:
    friend int add(s,q);
    q( )
    {
        b=10;
    }
};
int add(s l ,q n)
{
    return(l.a+n.b);
}
  int main()
  {
      s c;
      q p;
      cout<<add(c,p);

  }
