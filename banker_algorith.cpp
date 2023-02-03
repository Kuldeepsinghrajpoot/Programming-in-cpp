#include<iostream>
using namespace std;
int main()
{
    int p1=600,p2=753,p3=332,q1=200,q2=322,n1=302,n2=902,y1=211,y2=222,k1=002,k2=433,l=0;
    //cout<<"Enter the allocation\n";
    //cin>>p1>>q1>>n1>>y1>>k1;
   //cout<<"Enter the max\n";
   // cin>>p2>>q2>>n2>>y2>>k2;
    //cout<<"available\n";
   // cin>>p3;
   // cout<<"\n";
    cout<<"process\t\t"<<"Allocation"<<"\tMax"<<"\tAvailable\n";
        cout<<"p0"<<"\t\t"<<p1<<"\t\t"<<p2<<"\t"<<p3<<"\n";
        cout<<"p1"<<"\t\t"<<q1<<"\t\t"<<q2<<"\n";
        cout<<"p2"<<"\t\t"<<n1<<"\t\t"<<n2<<"\n";
        cout<<"p3"<<"\t\t"<<y1<<"\t\t"<<y2<<"\n";
        cout<<"p4"<<"\t\t"<<k1<<"\t\t"<<k2<<"\n";

        cout<<"Max need ="<<"max-allocation\n";
        p2=p2-p1;
        q2=q2-q1;
        n2=n2-n1;
        y2=y2-y1;
        k2=k2-k1;
        cout<<"process"<<"\t\t"<<"max need\n";
        cout<<"p0"<<"\t\t"<<p2<<"\n";
        cout<<"p1"<<"\t\t"<<q2<<"\n";
        cout<<"p2"<<"\t\t"<<n2<<"\n";
        cout<<"p3"<<"\t\t"<<y2<<"\n";
        cout<<"p4"<<"\t\t"<<k2<<"\n\n";

        if(p3>p2)
        {

            cout<<"p0,";
        }
        if(p3>q2)

        {
            q2=q1+p3;
            cout<<"p1,";
        }
        if(q2>n2)

        {
            cout<<"p2,";
        }
        if(q2>y2)

        {
               y2=y1+q2;
            cout<<"p3,";
        }
        if(y2>k2)

        {
            k2=y2+k1;
            cout<<"p4,";
        }


}
