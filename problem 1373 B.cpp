#include <bits/stdc++.h>
using namespace std;

int main()
{
   long long int test;
   cin >> test;
   

   for (int j = 0; j < test; j++)
   {
     string s; cin>>s;
     int count0=0,count1=0,a;
     for(int i=0;i<s.length();i++)
     {
      if(s[i]=='0')
      {
         count0++;
      }
      else
      {
         count1++;
      }
     }
     if(count0<=count1)
     {
      a=count0;
     }
     else
     {
      a=count1;
     }
     if(a%2!=0)
     {
      cout<<"DA"<<endl;
     }
     else
     {
      cout<<"NET"<<endl;
     }
   }
}
