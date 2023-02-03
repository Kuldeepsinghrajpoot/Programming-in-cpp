#include<iostream>
#include<string.h>
using namespace std;
class info
{
    char a[10][10],temp[10];
public:
     int i,j,n;
     info()
     {

         cout<<"enter the student strength :";
         cin>>n;
          cout<<"enter the name of student \n";
     }
     void display()
     {
         for(i=0;i<n;i++)
         {
             cin>>a[i];
         }
         cout<<"\nstudents name \n";
         for(i=0;i<n;i++)
         {
             cout<<a[i]<<"\n";
         }
     }
     void Ascending_order()
     {
          cout<<"\nAscending_order\n";
         for(i=0;i<n;i++)
         {
             for(j=0;j<i;j++)
             {
                 if (strcmp(a[i],a[j])<0)
                     {
                        strcpy( temp,a[i]);
                        strcpy(a[i],a[j]);
                        strcpy(a[j],temp);
                     }
             }
         }
         cout<<"\n";
         for(i=0;i<n;i++)
         {
             cout<<a[i]<<"\n";
         }
     }
     void Descending_order()
    {
         for(i=0;i<n;i++)
         {
             for(j=0;j<i;j++)
             {
                 if (strcmp(a[i],a[j])>0)
                     {
                        strcpy( temp,a[i]);
                        strcpy(a[i],a[j]);
                        strcpy(a[j],temp);
                     }
             }
         }
         cout<<"\nDescending_order\n";
         for(i=0;i<n;i++)
         {
             cout<<a[i]<<"\n";
         }
    }
};
int main()
{
    info s;
    s.display();
    int p,q,r,z,d;
    cout<<" 1.input\n 2.Display \n 3.Ascending_order\n 4.Descending_order\n";
    cin>>p;
    switch(p)
    {
        case 1:
    s.Ascending_order();
    break;
    }
    cin>>q;
      switch(q)
    {
        case 2:
    s.Descending_order();
    break;
    }

}
