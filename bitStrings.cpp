#include<iostream>
using namespace std;
#define ll long long
const ll M=1e9+7;
int main(){
ll n,m=1;
cin>>n;
for(ll i=0;i<n;i++){
    m*=2;
    m%=M;
}
cout<<m;}