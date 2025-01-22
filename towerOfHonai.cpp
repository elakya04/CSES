#include <iostream>
#include<cmath>
using namespace std;
void towers(int n,int src,int des,int aux){
    if(n==1)
    cout<<src<<" "<<des<<endl;
    else{
        towers(n-1,src,aux,des);
        cout<<src<<" "<<des<<endl;
        towers(n-1,aux,des,src);
    }
}
int main(){
    int n;
    cin>>n;
    cout<<pow(2,n)-1<<endl;
    towers(n,1,3,2);
    return 0;
}