#include<iostream>
using namespace std;
int main(){
    string s;
    cin>>s;
    int rep=1,best=1;
    for(int i=0;i<s.size();i++){
        if(s[i]==s[i+1])
          rep++;
        else
          rep=1;
    best=max(best,rep);
    }

cout<<best<<endl;
return 0;

}