#include<iostream>
using namespace std;
int main(){
long long n;
cin>>n;
while(n!=1){
cout<<n<<"\t";
if(n%2==0)
 n/=2;   
else
 n=3*n+1;
}
cout<<"1"<<endl;
}
/*#include <iostream>

using namespace std;

long long N;

int main(){
   cin>>N;
    while(N > 1){
       cout<<N<<"\t";
        if(N&1) N = 3*N+1;
        else    N >>= 1;
    }
    printf("1\n");
}*/