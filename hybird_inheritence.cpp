#include<iostream>
#include<string.h>
using namespace std;
class student
{
protected:
    int roll_number;
public:
    int a;
    student()
    {
        cout<<"enter the value : ";
        cin>>a;
        roll_number=a;
        cout<<"\nRoll no. \n"<<roll_number;
    }
};
class name :public student
{
protected:
    char p[20];
public:
    char f[20];
    name()
    {
        cout<<"Enter the name :";
        cin>>f;
        strcpy(p,f);
        cout<<"\nname is \n"<<p;
    }
};
class marks : public name
{
protected :
    int m[20];
public:
    int i,s[20],sum=0;
    marks()
    {
        cout<<"\nenter the marks :\n";
        for(i=0;i<3;i++)
        {
            cin>>s[20];

        }
        for(i=0;i<3;i++)
        {
            cout<<s[i];
            sum=sum+s[i];
        }
        cout<<sum;
    }

};
int main()
  {
      marks n;

  }
