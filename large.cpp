#include<iostream>
using namespace std;
class large
{
    int a,m[10],n,i;
public:
    void ini()
    {
        cout<<"Enter the value for user:";
        cin>>a;
    }
    void cal()
    {
        for(i=0;i<a;i++)
        {
            cin>>m[i];
        }
        n=m[0];
        cout<<"Array value is :";
        for(i=0;i<a;i++)
        {
            cout<<","<<m[i];
        }
        cout<<"\nLarge number is :";
        for(i=0;i<a;i++)
        {
            if(n<m[i])
            {
                n=m[i];
            }
        }
        cout<<n<<"\n";
    for(i=0;i<a;i++)
        {
            if(n>m[i])
            {
                n=m[i];
            }
        }
        cout<<"small number is :"<<n;
    }

};

 int main()
 {
     large l;
     l.ini();
     l.cal();
 }
