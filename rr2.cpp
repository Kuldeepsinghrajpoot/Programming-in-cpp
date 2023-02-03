#include<iostream>
using namespace std;
int main()
{
         int p[10],b[10],i,j=0,c=0;
         for(i=0;i<3;i++)
          {
          cin>>p[i];
          }
         system("cls");
         for(i=0;i<3;i++)
         {
            cout<<"p"<<i<<"\t";
            cout<<p[i]<<"\n";
         }
          cout<<"\n";
          abcd:{
          for(i=0;i<3;i++)
          {
           if(p[i]>=4)
           {
           p[i]=p[i]-4;
           cout<<"p"<<i<<"\t";
           c=c+4;
           cout<<"C"<<c<<"\n";
           }
           else if(p[i]<4)
           {
            c=c+p[i];
            cout<<"\n"<<"p"<<i<<"\t"<<c<<"\n";
          }
         }
        j++;
        }
        if(j<6)
        {
         goto abcd;
        }
}


