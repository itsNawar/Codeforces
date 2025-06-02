#include <bits/stdc++.h>
using namespace std;

int main()
{
   long long int test;
   cin >> test;

   for (int j = 0; j < test; j++)
   {
     long long  int n, x;
      cin >> n >> x;
      long long int arr[n];
      double sum1 = 0, sum2 = 0;
      for (int i = 0; i < n; i++)
      {
         cin >> arr[i];
         sum1 = sum1 + arr[i];
         sum2 = sum2 + ceil(arr[i] /(double) x);
      }

     long long  int min_beauty = ceil(sum1 / (double)x);
      long long int max_beauty = sum2;

      cout << min_beauty << " " << max_beauty << endl;
   }
}
