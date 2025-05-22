#include <bits/stdc++.h>
using namespace std;

int main()
{
   int test;
   cin >> test;

   for (int k = 0; k < test; k++)
   {
      int n,a,b; cin>>n>>a>>b;
      if(a+b+2<=n)
      {
         cout<<"Yes"<<endl;
      }

      else if (a==b && b==n)
      {
         cout<<"Yes"<<endl;
      }

      else
      {
         cout<<"No"<<endl;
      }
   }
}
