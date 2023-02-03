#include<iostream>
#include<string.h>
using namespace std;
class aray
{
protected:
    int a[5];
public:
    void get();
    void display();
};
void aray ::get()
{
    int i;
    cout<<"Enter the element ";
    for(i=0;i<5;i++)
    {
        cin>>a[i];
    }
}
void aray::display()
{
    int i;
    for(i=0;i<5;i++)
    {
        cout<<"\n"<<a[i];
    }
}
class sortr:public aray
{
public :
    void assending();
    void desending();
};
 void sortr::assending()
 {
     int i,j,k;
     {
         for(i=0;i<5;i++)
         {
             for(j=0;j<i;j++)
             {
                 if(a[i]>a[j])
                 {
                     k=a[i];
                     a[i]=a[j];
                     a[j]=k;

                 }
             }
         }
     }
     for(i=0;i<5;i++)
     {
         cout<<"\t"<<a[i];
     }
 }
 void sortr ::desending()
 {
     int i,j,k;
     for(i=0;i<5;i++)
     {
         for(j=0;j<i;j++)
         {
           if(a[i]<a[j])
           {
               k=a[i];
               a[i]=a[j];
               a[j]=k;
           }
         }
     }
     for(i=0;i<5;i++)
     {
         cout<<"\t"<<a[i];
     }
 }
 int main()
 {
        cout<<" enter 1. input data ";
        cout<<"\n enter 2. display data ";
        cout<<"\n enter 3. asending order ";
        cout<<"\n enter 4. desending order ";
        cout<<"\n enter 5. quite ";

     sortr r;
     int ch;
     do
        {
        cout<<"\n enter your choice :";
        cin>>ch;
        switch (ch)
        {
        case 1:
            r.get();
            break;
        case 2:
            r.display();
            break;
        case 3:
            r.assending();
            break;
        case 4:
            r.desending();
            break;
        case 5:
            exit(5);
            break;
        }
        }while(ch=5);
 }
