#include <bits/stdc++.h>
using namespace std;

int main()
{
   int test;
   cin >> test;

   for (int j = 0; j < test; j++)
   {
      int a,b,c; cin>>a>>b>>c;
      if(((2*b)-c)%a==0 && ((2*b)-c)>0 )
      {
         cout<<"YES"<<endl;
      }
      else if(((c+a)%(2*b)==0) && ((c+a)>0))
      {
         cout<<"YES"<<endl;
      }
      else if(((2*b)-a)%c==0 && (((2*b)-a)>0))
      {
         cout<<"YES"<<endl;
      }
      else
      {
         cout<<"NO"<<endl;
      }

   }
}
