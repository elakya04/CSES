#include<iostream>
using namespace std;
int  main(){
    long n;
    cin>>n;
    long a[n],sum=0,temp;
    for(int i=0;i<n-1;i++)
    {cin>>a[i];
     sum+=a[i];}
    temp=((n*(n+1))/2)-sum;
    cout<<temp;
    return 0;
 
}
