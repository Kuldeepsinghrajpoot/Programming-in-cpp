#include<iostream>
using namespace std;
class b;
class a
{
     private:
     int x;
     public:
    a()
    {
    cout<<"enter the value of x : ";
    cin>>x;
    }
    friend int add(a,b);
};
class b
{
private:
    int y;
public:
    b()
    {
        cout<<"enter the value of y : ";
        cin>>y;
    }
    friend int add(a,b);
};
 int add( a A, b B)
 {
      return(A.x + B.y);
 }
 int main()
 {
     a A;
     b B;
     cout<<"after x and y adtion is : "<< add( A ,B);
 }
