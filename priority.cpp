#include<iostream>
using namespace std;
class priority
{
    int p1,p2,p3,c=0;
    float avg=0,sum=0;
    public:
    priority()
    {
    cout<<"process"<<"\t|\t"<<"Burst"<<"\n";
    cout<<"p1"<<"\t|\t";
    cin>>p1;
    cout<<"p2"<<"\t|\t";
    cin>>p2;
    cout<<"p3"<<"\t|\t";
    cin>>p3;
    }
    void cal()
    {
    cout<<"Gantt chart "<<"\n";
    cout<<"\t|p1\t|"<<"p2\t|"<<"p3"<<"\n";
    p2=p1+p2;
    p3=p2+p3;
    cout<<c<<"\t|"<<p1<<"\t|"<<p2<<"\t|"<<p3<<"\n\n";
    cout<<"Average time:"<<"\n";
    cout<<"p1 = "<<c<<"\n";
    cout<<"p2 = "<<p1<<"\n";
    cout<<"p3 = "<<p2<<"\n\n";
    sum= p1+p2;
    cout<<"waiting time:"<<sum<<"\n";
    avg=sum/3;
    cout<<" Average Waiting time :"<<avg<<"\n\n";
    cout<<" Average Turn around time :"<<"\n";
    cout<<"p = completion - submition\n";
    cout<<"p1 = p1-0 = "<<p1<<"\n";
    cout<<"p2 = p2-0 = "<<p2<<"\n";
    cout<<"p3 = p3-0 = "<<p3<<"\n\n";
    sum=p1+p2+p3;
    cout<<" Turn around time:"<<sum<<"\n";
    avg=sum/3;
    cout<<"Average Turn around time:"<<avg;
    }
};
int main()
{
    priority l;
    l.cal();
}
