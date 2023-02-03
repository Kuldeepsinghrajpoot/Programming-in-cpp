#include<iostream>
// #include<string.h>
using namespace std;
class student
{
   char name[30];
   char roll[30];
   int age;
   char clas[470];

   public:
       student()
       {
           cout<<"Enter the name :";
           cin>>name;
           cout<<"Enter the Roll no.";
           cin>>roll;
           cout<<"Enter the age :";
           cin>>age;
           cout<<"Enter the class :";
           cin>>clas;

       }
       void studentt()
       {    cout<<"\n";
           cout<<"Student Details Here \n";
           cout<<" Name    : "<<name<<endl;
           cout<<" Roll no : "<<roll<<endl;
           cout<<" Age     : "<<age<<endl;
           cout<<" class   : "<<clas<<endl;
       }
};
   int main()
   {
       student s;
       s.studentt();
   }
