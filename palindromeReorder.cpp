#include<bits/stdc++.h>
#include<map>
#define ll long long
using namespace std;
int main(){
  string s;
  cin>>s;
  map<char,ll> m;
 for(char c:s)
 m[c]++;
ll odd_count=0;
for(auto p:m){
  if(p.second%2==1)
   odd_count++;
}
if(odd_count>1){
  cout<<"NO SOLUTION"<<endl;
  return 0;
}
string start;
string mid;
string end;
for(auto p:m){
if(p.second%2==1)
mid+=p.first;
 string s(p.second/2,p.first);
 start+=s;
 end+=s;
}
reverse(end.begin(),end.end());
cout<<start<<mid<<end<<endl;
}
