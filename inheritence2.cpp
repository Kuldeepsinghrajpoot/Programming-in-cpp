#include<iostream>
using namespace std;
class student
{
     protected:
    int age,roll;
};
 class information : public student
 {
     int x,y;
 public:
    void cal()
    {
        cin>>x>>y;
        roll=x;
        age=y;
    }
    void display()
    {
        cout<<"roll-"<<roll;
        cout<<"\nage-"<<age;
    }
 };
   int main()
   {
       information n;
       n.cal();
       n.display();
   }
