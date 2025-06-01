#include <bits/stdc++.h>
using namespace std;

int main()
{
   long long int test;
   cin >> test;

   for (int j = 0; j < test; j++)
   {
      long long int n,k; cin>>n>>k;
      if((n%2!=0 && k%2!=0) || (n%2==0 && k%2!=0) || (n%2==0 && k%2==0)  )
      {
         cout<<"YES"<<endl;
      }
      else
      {
         cout<<"NO"<<endl;
      }
   }
}
