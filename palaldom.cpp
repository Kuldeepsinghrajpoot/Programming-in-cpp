#include<iostream>
using namespace std;
class palindrome
{
    int a,b,c=0,e,sum=0;
public:
    palindrome()
{

  cout<<"Enter the value :";
  cin>>a;
  c=a;
}
void cal()
{
  while(a!=0)
  {

      b=a%10;
      sum=(sum*10)+b;
      a=a/10;

  }
  e=sum;
  if(e==c)
  {
      cout<<"palindrome";
  }
  else{
    cout<<"not palindrome";
  }

}
};
int main()
{
    palindrome n;
    n.cal();
}

