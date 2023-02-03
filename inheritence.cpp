#include<iostream>
using namespace std;
class p
 {
     protected:
     int total;
 };
class c : public p
{
    int que;
public:
    void cal(int total)
    {
        que=total;
    }
    void dis()
    {
        cout<<que;
    }
};
 int main()
 {
     c n;
     n.cal(10);
     n.dis();

 }
