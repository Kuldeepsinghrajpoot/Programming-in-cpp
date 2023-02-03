.#include<iostream>
using namespace std;
#include<string.h>
class name
{
    char a[20],b[10],p;
    public:
        name()
        {
            cout<<"enter the first  name : ";
            cin>>a;
            cout<<"enter the second name :";
            cin>>b;
        }
        void display()
        {
            p=strcmp(a,b);
            if(p==0)
            {
                cout<<"same name ";
            }
            else
            {
                cout<<"different name ";
            }
        }
};
int main()
{
    name s;
    s.display();
}
