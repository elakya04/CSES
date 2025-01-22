#include<iostream>
#define ll long long
using namespace std;
int main(){
    ll n,current=5,answer=0;
    cin>>n;
    while(current<=n){
        answer+=n/current;
        current*=5;
    }
cout<<answer<<endl;
return 0;
}