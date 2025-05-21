#include <bits/stdc++.h>
using namespace std;

int main()
{
   int test;
   cin >> test;

   for (int i = 0; i < test; i++)
   {
      int n,m,a=-1,count1=0; cin>>n>>m;
      string s1,s2,s3=""; cin>>s1>>s2;

     for(int i=0;i<=10;i++)
   {
      s3=s3+s1;
      s1=s3;
      if (s3.find(s2) != std::string::npos) {
        a=i;
        break;
   }

   }
   cout<<a<<endl;

   
}
}

