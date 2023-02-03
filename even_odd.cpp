#include<iostream>
using namespace std;
class odd
{
    int a;
public:
     odd()
    {
        cout<<"Enter the number for check even / odd ";
        cin>>a;
    }
    void even()
    {
        if(a%2==0)
        {
            cout<<"even number";
        }
        else
        {
            cout<<"odd number";
        }
    }
};
int main()
{
    odd n;
    n.even();
}
