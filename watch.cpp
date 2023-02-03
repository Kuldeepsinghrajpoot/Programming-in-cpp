#include<iostream>
using namespace std;
int main()
{

    int b=1,c=0,i=0,s=0,h=0;
    int a=0;
   // cout<<"enter the value";
    //cin>>s;
    while(i<=a)
    {
        if(a>=13)
        {
           a=a-13;
           i=i-i;
           c=c+1;
           {
               if(c>=60)
               {
                   c=c-60;
                   s=s+1;

                   if(s>=60)
                   {
                       s=s-60;
                       h=h+1;
                   }
               }
           }
        }
        system("cls");
        cout<<"\n\n\n\n\n\n";
        cout<<"\t\t\t\t "<<h<<":"<<s<<":"<<c<<":"<<a;
        a++;
        i++;
    }
}
