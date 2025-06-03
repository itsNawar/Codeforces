#include <bits/stdc++.h>
using namespace std;

int main()
{
   long long int test;
   cin >> test;

   for (long long int j = 0; j < test; j++)
   {

      long long int arr[3];
      cin >> arr[0] >> arr[1] >> arr[2];
      long long int max= *max_element(arr,arr+3);
      long long int A, B, C;
      
      if(arr[0]>arr[1] && arr[0]>arr[2])
      {
         A=0;
      }
      else 
      {
         A=max-arr[0]+1;
      }

       if(arr[1]>arr[0] && arr[1]>arr[2])
      {
         B=0;
      }
      else 
      {
         B=max-arr[1]+1;
      }

       if(arr[2]>arr[1] && arr[2]>arr[0])
      {
         C=0;
      }
      else 
      {
         C=max-arr[2]+1;
      }

      cout << A << " " << B << " " << C << endl;
   }
}
