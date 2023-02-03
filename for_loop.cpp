#include<iostream>
using namespace std;
int main()
{
  int i,c,a,b,n,j=0,sum=0,e;
  cout<<"Enter the value  user of find palindrome : ";
  cin>>n;
  for(i=0;i<=n;i++)
  {
     a=i;
     sum=0;
  while(a!=0)
  {
      b=a%10;
      sum=(sum*10)+b;
      a=a/10;
  }

  if(sum==i)
  {
      cout<<sum<<",\t";
  }


  }
}

