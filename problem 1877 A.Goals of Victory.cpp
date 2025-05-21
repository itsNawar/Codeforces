#include <bits/stdc++.h>
using namespace std;

int main()
{
   int test;
   cin >> test;

   for (int i = 0; i < test; i++)
   {
      int n; cin>>n;
      int arr[n];
      int sum=0;
      for(int j=0;j<n-1;j++)
      {
         cin>>arr[j];
         sum=sum+arr[j];
      }
      
      cout<<-sum<<endl;
   }
}
