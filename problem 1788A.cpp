#include<bits/stdc++.h>
using namespace std;

int main()
{
    int test; cin>>test;
    
    for(int i=0;i<test;i++)
    {
        int n,count1=0,count2=0; cin>>n;
        int arr[n];
        for(int i=0;i<n;i++)
        {
            cin>>arr[i];
            if(arr[i]==2)
            {
                count1++;
            }
        }
 
        if(count1==0)
        {
            cout<<"1"<<endl;
        }

        else if(count1%2!=0)
        {
            cout<<"-1"<<endl;
        }

        else
        {
            for(int k=0;k<n-1;k++)
            {
                if(arr[k]==2)
                {
                    count2++;
                    if(count2==(count1/2))
                    {
                        cout<<k+1<<endl;
                    }
                    
                }
            }
        }
    }
}
    
