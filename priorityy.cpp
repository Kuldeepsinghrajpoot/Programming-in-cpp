#include<iostream>
using namespace std;
int main()
{
       int p0,p1,c=0,m0,m1;
       float avg=0,sum=0;
       cout<<"Enter the priority\n";
       cin>>m0>>m1;
       cout<<"process"<<"\t|\t"<<"Burst\n";
       cout<<"p0\t|\t";
       cin>>p0;
       cout<<"p1\t|\t";
       cin>>p1;

       cout<<"\nprocess"<<"\t|\t"<<"Burst"<<"\t|\t"<<"Priority\n";
       cout<<"p0\t|\t"<<p0<<"\t|\t"<<m0<<"\n";
       cout<<"p1\t|\t"<<p1<<"\t|\t"<<m1<<"\n";
       cout<<"Gantt chart\n";
       if (m0<m1 || m0==m1)
       {
           cout<<"\tp0"<<"\t"<<"p1\n";
           p1=p0+p1;
           cout<<c<<"\t"<<p0<<"\t"<<p1<<"\n";
           cout<<"Average waiting time:\n";
           cout<<"p0= "<<c<<"\n";
           cout<<"p1= "<<p0<<"\n";
           sum=c+p0;
           cout<<"sum="<<sum<<"ms"<<"\n";
           avg=sum/2;
           cout<<"Average waiting time = "<<avg<<"ms"<<"\n\n";
           cout<<" Average Turn around time \n";
           cout<<"p0 = "<<p0<<"\n";
           cout<<"p1 = "<<p1<<"\n";
           sum=p0+p1;
           cout<<"\nsum"<<sum<<"ms"<<"\n";
           avg=sum/2;
           cout<<"Average turn around time :"<<avg<<"ms";
       }
       else if (m0>m1||m0==m1)
       {
           cout<<"\tp1"<<"\t"<<"p0\n";
           p0=p0+p1;
           cout<<c<<"\t"<<p1<<"\t"<<p0<<"\n";
           cout<<"Average waiting time:\n";
           cout<<"p1= "<<c<<"\n";
           cout<<"p0= "<<p1<<"\n";
           sum=c+p1;
           cout<<"sum="<<sum<<"ms"<<"\n";
           avg=sum/2;
           cout<<"Average waiting time ="<<avg<<"ms"<<"\n";
           cout<<" Average Turn around time :\n";
           cout<<"p1 = "<<p1<<"\n";
           cout<<"p0 = "<<p0;
           sum=p0+p1;
           cout<<"\nsum = "<<sum<<"ms"<<"\n";
           avg=sum/2;
           cout<<"Average turn around time :"<<avg<<"ms";
       }
}
