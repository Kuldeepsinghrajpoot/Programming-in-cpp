#include<iostream>
using namespace std;
class fac
{
    int a;
    public:
    fac()
    {
      cout<<"Enter the value:";
      cin>>a;
    }
    void cal()
    {
        int i,p=1;
        for(i=1;i<=a;i++)
        {
            p=p*i;
        }
        cout<<"Factorial of"<<a<<" is :"<<p;
    }

};

int main()
{

   fac n;
   n.cal();
}
