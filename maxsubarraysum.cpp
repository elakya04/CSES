#include<bits/stdc++.h>
using namespace std;
#define ll long long
int main(){
   ll n;cin>>n;
   vector<ll>a(n);
   for(int i=0;i<n;i++){
    cin>>a[i];
   } 
   ll maxsum=INT_MIN,sum=0;
   for(int i=0;i<n;i++){
    sum=max(sum+a[i],a[i]);
    maxsum=max(maxsum,sum);
   }
   cout<<maxsum<<endl;
}