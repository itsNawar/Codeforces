#include <bits/stdc++.h>
using namespace std;

int main()
{
   int test;
   cin >> test;

   for (int i = 0; i < test; i++)
   {
      int n;
      cin >> n;
      int a;
      vector<int> arr;
      map<int, int> freq;

      for (int i = 0; i < n; i++)
      {
         cin >> a;
         freq[a]++;
      }

      
      if(freq.size()>2)
      {
         cout<<"No"<<endl;
      }
      else  if(freq.size()==1)
         {
             cout<<"Yes"<<endl;
         }
      else
      {
          for(auto it : freq) arr.push_back(it.second);

      sort(arr.begin(), arr.end());

        if(arr[1]-arr[0]<=1)
        {
             cout<<"Yes"<<endl;
        }

        else
        {
          cout<<"No"<<endl;
        }
      }
   }
}
