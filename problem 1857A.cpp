#include<bits/stdc++.h>
using namespace std;

int main()
{
    int test; cin>>test;
    for(int i=0;i<test;i++)
    {
     int n; cin>>n;
    int arr[n],sum=0;
    for(int i=0;i<n;i++)
    {
      cin>>arr[i];
      sum=arr[i]+sum;

    }
    if(sum%2==0)
    {
        cout<<"YES"<<endl;
    }
    else
    {
        cout<<"NO"<<endl;
    }
}
    }
    
