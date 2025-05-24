#include <bits/stdc++.h>
using namespace std;

int main()
{
   int test;
   cin >> test;

   for (int j = 0; j < test; j++)
   {
      long long int n;
      
      cin >> n;
      long long int arr[n];
      for (int i = 0; i < n; i++)
      {
         cin >> arr[i];
      }
      long long int count1 = 0, ans = 0;
      for (int i = 0; i < n; i++)
      {
         if (arr[i]==0)
         {
            count1++;
         }
         else
         {
            count1 = 0;
           
            
         }
          ans = max(ans,count1);
      }
      cout <<ans << endl;
   }
}
