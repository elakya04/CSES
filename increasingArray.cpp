#include<iostream>
using namespace std;
int main(){
    long long n,i,j=0;
    cin>>n;
    long long a[n];
    for(i=0;i<n;i++)
       cin>>a[i];
    for(i=0;i<n-1;i++){
    if(a[i]>a[i+1])
       {j+=(a[i]-a[i+1]);
    a[i+1]=a[i];}
    }
    cout<<j<<endl;
    return 0;
}