#include<bits/stdc++.h>
using namespace std;

int main()
{
    int n; cin>>n;
    int arr[n],arr1[n];
    for(int i=0;i<n;i++)
    {
      cin>>arr[i];
      arr1[i]=abs(arr[i]);

    }
    sort(arr1, arr1+n);
    cout<<arr1[0];
}
