#include<iostream>
using namespace std;
int main()
{
  int a,b,c=0,e,sum=0;
  cout<<"Enter the value :";
  cin>>a;
  c=a;
  while(a!=0)
  {

      b=a%10;
      sum=sum+b*b*b;
      cout<<sum;
      a=a/10;
      cout<<b;
  }
  e=sum;
  if(e==c)
  {
      cout<<"parldom";
  }
  else{
    cout<<"not equal";
  }

}

