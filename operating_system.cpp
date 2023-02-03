#include<iostream>
using namespace std;
int main()
{
       int p0,p1,p2,c=0;
       float avg=0,sum=0;
       cout<<"process"<<"\t\t"<<"Burst\n";
       cout<<"p0\t|\t";
       cin>>p0;
       cout<<"p1\t|\t";
       cin>>p1;
       cout<<"Gantt chart\n";
       if (p0<=p1)
       {
           cout<<"\tp0"<<"\t"<<"p1\n";
           p1=p0+p1;
           cout<<c<<"\t"<<p0<<"\t"<<p1<<"\n";
           cout<<"Average waiting time:ms\n";
           cout<<"p0= "<<c<<"\n";
           cout<<"p1= "<<p0<<"\n";
           sum=c+p0;
           cout<<"sum="<<sum<<"\n";
           avg=sum/2;
           cout<<"Average waiting time = ms"<<avg<<"\n\n";
           cout<<" Average Turn around time :ms\n";
           cout<<"p0 = "<<p0<<"\n";
           cout<<"p1 = "<<p1<<"\n";
           sum=p0+p1;
           cout<<"\nsum"<<sum<<"\n";
           avg=sum/2;
           cout<<"Average turn around time :"<<avg<<"ms";
       }
       if (p0>=p1)
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
