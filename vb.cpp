#include<iostream>
using namespace std;
int main()
{
    int a[4][4]={7,8,9,4,5,6,1,2,3,11,12,13,14,15,16};
    for(int i=0;i<4;i++)
    {
        for(int j=0;j<4;j++)
        {
            cout<<"\t"<<a[i][j];
        }
        cout<<"\n";
    }
}
