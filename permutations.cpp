#include<iostream>
using namespace std;
int main(){
    long long n;
    cin>>n;
    if(n==1){
        cout<<n<<endl;
        exit(0);
    }
    if(n<=3){
        cout<<"NO SOLUTION"<<endl;
    }else{
        if(n%2==0){
            for(int i=n-1;i>0;i-=2)
            cout<<i<<" ";
            for(int i=n;i>=2;i-=2)
            cout<<i<<" ";
            cout<<endl;
        }
        else{
            for(int i=n-2;i>0;i-=2)
            cout<<i<<" ";
            for(int i=n-1;i>=2;i-=2)
            cout<<i<<" ";
            cout<<n<<endl;
        }
    }
    return 0;
}