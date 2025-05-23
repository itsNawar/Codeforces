#include <bits/stdc++.h>
using namespace std;

int main()
{
   int test;
   cin >> test;

   for (int j = 0; j < test; j++)
   {
      long long int n, k;
      
      cin >> n >> k;
      long long int arr[n];
      for (int i = 0; i < n; i++)
      {
         cin >> arr[i];
      }
      sort(arr, arr + n);
      long long int count1 = 1, ans = 1;
      for (int i = 1; i < n; i++)
      {
         if (arr[i] - arr[i-1] <= k)
         {
            count1++;
         }
         else
         {
            count1 = 1;
           
            
         }
          ans = max(ans,count1);
      }
      cout << n - ans << endl;
   }
}
