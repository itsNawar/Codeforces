#include <bits/stdc++.h>
using namespace std;

int main() {

 string s; getline(cin , s);
  set<char>a;
 for(int i=0;i<s.size();i++)
 {
  if(s[i]!='{' && s[i]!='}' && s[i]!=',')
  {
   a.insert(s[i]);
  } 
 }
 if(a.size()==0)
 {
  cout<<"0"<<endl;
 }
 else if(a.size()==1){
 cout<<"1"<<endl;
 }
 else{
  int q = a.size()-1;
 cout<<q<<endl;
 }


    }
        
