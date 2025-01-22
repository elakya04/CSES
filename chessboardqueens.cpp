#include<bits/stdc++.h>
using namespace std;
char chess[8][8];
int c=0;
bool left_dia[15], right_dia[15], row[7];
void rec(int j){
	if (j==8) {c++; return;}
	for(int i=0;i<8;i++){
		if (chess[i][j]=='.' && left_dia[i-j+7]==0 && right_dia[i+j]==0 && row[i]==0){
			left_dia[i-j+7]=1, right_dia[i+j]=1, row[i]=1;
			rec(j+1);
			left_dia[i-j+7]=0, right_dia[i+j]=0, row[i]=0;
		}
	}
}
int main(){
	for(int i=0;i<8;i++)
    for(int j=0;j<8;j++)
    cin>>chess[i][j];
	rec(0);
	cout<<c;
}