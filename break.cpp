#include<iostream>
using namespace std;
int main()
{
  int a=67,c=0,i=1;
  while(i<=600)
  {
      if(a>=60)
      {
          c=c+1;
          cout<<c<<"..";

          a=a-60;
          cout<<a<<"\n";

      }


      i++;

  }
  cout<<a;
  while(i<=600)
  {
      if(a>=60)
      {
          c=c+1;
          cout<<c<<"..";

          a=a-60;
          cout<<a<<"\n";

      }


      i++;

  }
  cout<<a;
}
