/*
** Md. Najmul Huda Hridoy
** Handle - 3000plus
*/

#include<bits/stdc++.h>
using namespace std;
int main(){
	ios::sync_with_stdio(0);
	cin.tie(0);
	int T, r1, c1, r2, c2, Case = 0;
	cin>>T;
	while(T--){
		cout<<"Case "<<++Case<<": ";
		cin>>r1>>c1>>r2>>c2;
		if(abs(r2-r1) == abs(c2-c1)){
			cout<<1<<endl;
		}
		else if((r1+r2+c1+c2) % 2 == 0){
			cout<<2<<endl;
		}
		else{
			cout<<"impossible"<<endl;
		}
	}
	return 0;
}
