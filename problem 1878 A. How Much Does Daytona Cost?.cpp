#include<bits/stdc++.h>
using namespace std;

int main()
{
    int test; cin>>test;
    
    for(int i=0;i<test;i++)
    {
       int n,k; cin>>n>>k;
       bool got_it=false;
       int arr[n];
       for(int i=0;i<n;i++)
       {
          cin>>arr[i];
          if(arr[i]==k)
          {
           got_it=true;
          }
       }
       if(got_it)
       {
        cout<<"YES"<<endl;
       }
       else
       {
        cout<<"NO"<<endl;
       }
    }
}
    
