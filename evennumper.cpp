#include<iostream>
using namespace std;
  int main()
  {
    int a,b,i;
    cout<<"Enter the number";
    cin>>a;
    for(i=0;i<=a;i++)
    {

        if(i%2==0)
        {
            if(i==0)
            {
            cout<<"even number is";
            }
         cout<<i;

        }
        else if(i%2==1)
        {
            if(i==1)
            {

                cout<<"odd number";
            }
            cout<<i;
        }

    }

  }
