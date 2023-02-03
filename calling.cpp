#include<iostream>
using namespace std;
class un
{
    int a,b,c;
public:
    un()
    {
        cout<<"Enter the value o a";
        cin>>a;
        cout<<"Enter the value of b";
        cin>>b;
    }
    void cal()
    {
        c=a+b;
    }
    void dis()
    {
        cout<<c;
    }
};
int main()
{
  un n;
  n.cal();
  //n.dis();
}
