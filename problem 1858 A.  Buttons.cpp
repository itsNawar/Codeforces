#include<bits/stdc++.h>
using namespace std;

int main()
{
    int test; cin>>test;
    
    for(int i=0;i<test;i++)
    {
       long long int a,b,c; cin>>a>>b>>c;
       if(c%2!=0)
       {
         if(b>a)
         {
            cout<<"Second"<<endl;
         }
         else
         {
            cout<<"First"<<endl;
         }
       }
         else
         {
            
          if(a<=b)
         {
            cout<<"Second"<<endl;
         }
         else
         {
            cout<<"First"<<endl;
         }
         }
         
       }
    }

    
