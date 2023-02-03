#include<iostream>
using namespace std;
class a
{
    int i,j,m[10][10],n[10][10],k[10][10];
public:
    a()
    {
        cout<<"enter the first matrix :\n";
        for(i=0;i<3;i++)
        {
            for(j=0;j<3;j++)
            {
                cin>>m[i][j];
            }
        }
         cout<<"\nfirst matrix :\n";
        for(i=0;i<3;i++)
        {
            for(j=0;j<3;j++)
            {
                cout<<" "<<m[i][j];
            }
            cout<<"\n";
        }
        cout<<"\nenter the second matrix :\n";
        for(i=0;i<3;i++)
        {
            for(j=0;j<3;j++)
            {
                cin>>n[i][j];
            }
        }
         cout<<"\nsecond matrix :\n";
        for(i=0;i<3;i++)
        {
            for(j=0;j<3;j++)
            {
                cout<<" "<<n[i][j];
            }
            cout<<"\n";
        }
    }
    void display()
    {
        cout<<"\nmatrix :\n";
         for(i=0;i<3;i++)
        {
            for(j=0;j<3;j++)
            {
                k[i][j]=m[i][j]+n[i][j];
                cout<<" "<<k[i][j];
            }
            cout<<"\n";
        }
    }
};
int main()
{
    a s;
    s.display();
}
