/*#include<iostream>
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

}*/
#include<iostream>
using namespace std;
int main(){
    string s;
    int a=0,g=0,c=0,t=0;
    cin>>s;
    for(int i=0;s[i]!='\n';i++){
        cout<<s[i];
        switch(s[i]){
            case 'A':
            a++;
            case 'G':
            g++;
            case 'C':
            c++;
            case 'T':
            t++;
        }
    }
    if(a>=g&&a>=c&&a>=t)
    cout<<a;
    else if(g>=c&&g>=t)
    cout<<g;
    else 
    cout<<(c>=t)?c:t;
    return 0;
}