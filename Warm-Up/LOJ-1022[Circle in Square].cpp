/*
** Md. Najmul Huda Hridoy
** Handle - 3000plus
*/

#include<bits/stdc++.h>
#define PI 2*acos(0.0)
using namespace std;
int main(){
	ios::sync_with_stdio(0);
	cin.tie(0);
	int T, Case=0;
	double r;
	cin>>T;
	while(T--){
		cin>>r;
		cout<<"Case "<<++Case<<": "<<fixed<<setprecision(2)<<(r+r)*(r+r)-(PI*r*r)<<endl;
	}
	return 0;
}
