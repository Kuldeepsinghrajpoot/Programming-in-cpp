    #include<iostream>
    using namespace std;
    int main()
    {
        float i,a,b,c=0,p,e=0,g,h,q,s1,s2,s3;
        cout<<"Enter the hours & minute & second : \n";
        cin>>g>>a>>b;
        cout<<"Enter the hours & minute & second : \n";
        cin>>h>>p>>q;
        cout<<"t1="<<g<<":"<<a<<":"<<b;
        cout<<",\t";
        cout<<"t2="<<h<<":"<<p<<":"<<q<<"\n";
        s1=a+p;
        s2=b+q;
        s3=g+h;
        while(i<=s2)
       {

         if(s2>=60)
         {
             c=c+1;
             s2=s2-60;

         }
         i++;
     }
       s1=s1+c;
       while(i<=s1)
        {

         if(s1>=60)
         {

             s1=s1-60;
             e=e+1;

         }
         i++;
       }
        s3=s3+e;
       cout<<"\n\nTotal sum of time 't': "<<s3<<":"<<s1<<":"<<s2;
    }
