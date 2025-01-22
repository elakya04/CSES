#include<iostream>
using namespace std;
int main(){
    long long n;
    cin>>n;
    cout<<"0"<<endl;
    for(long long i=2;i<=n;i++)
    {
        long long j=((i*i)*(i*i-1)/2)-(4*(i-2)*(i-1));
    cout<<j<<endl;
    }
    return 0;
}