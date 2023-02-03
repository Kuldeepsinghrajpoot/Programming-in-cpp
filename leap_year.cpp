#include<iostream>
using namespace std;
int main()
{

    int a;
    cout<<"Enter the year : ";
    cin>>a;
    if(a%400==0)
    {
        if(a%100==0)
        {
            if(a%4==0)
            {
                cout<<"leap year";
            }

        else
            {
        cout<<" not leap year : "<<a;
            }
        }

        else
            {
        cout<<" not leap year : "<<a;
            }
    }
     else
            {
        cout<<" not leap year : "<<a;
            }
}
