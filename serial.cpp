#include<iostream>
#include<string.h>
using namespace std;
class student
{
    char a[40][20],name[30];
    int i,j,n;
public :
    student()
    {
        cout<<"enter the student strength\n";
        cin>>n;
        cout<<"Enter the student name :\n";
        for(i=0;i<n;i++)
        {
        cin>>a[i];
        }
        for(i=0;i<n;i++)
      {
         for(j=0;j<i;j++)
         {
            if(strcmp(a[i],a[j])<0)
            {
               strcpy(name,a[i]);
               strcpy(a[i],a[j]);
               strcpy(a[j],name);
            }
         }
      }
       display();
        for(i=0;i<n;i++)
      {
         for(j=0;j<i;j++)
         {
            if(strcmp(a[i],a[j])>0)
            {
               strcpy(name,a[i]);
               strcpy(a[i],a[j]);
               strcpy(a[j],name);
            }
         }
      }
    }

      void display()
      {
          for(i=0;i<n;i++)
        {
        cout<<a[i]<<",";
        }
      }
};
 int main()
 {
     student s;
     s.display();
 }
