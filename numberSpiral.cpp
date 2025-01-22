#include<iostream>
using namespace std;
int main(){
    long long t,i;
    long long x,y;                                                                    
    cin>>t;
    for(i=0;i<t;i++)
    {
      cin>>y>>x;
      long long m=max(y,x);
      if(m%2==0)
      {if(x>y)
      cout<<(m-1)*(m-1)+y<<endl;
      else
      cout<<(m-1)*(m-1)+2*m-x<<endl;
    }
    else{
    if(x<y)
      cout<<(m-1)*(m-1)+x<<endl;
      else
      cout<<(m-1)*(m-1)+2*m-y<<endl;                                                                                                                                                                                                   
    }
    }
    return 0;
}